@import Foundation;

@class DrinkConsumption;
@class RACSignal;

@interface CaffeineHistoryManager : NSObject

@property (readonly) BOOL isAuthorized;

- (RACSignal *)processDrink:(DrinkConsumption *)drink;

- (RACSignal *)fetchHistory;

@end