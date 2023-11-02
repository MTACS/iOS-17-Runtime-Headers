
@interface FCPrivateDataSyncConditionAppState : NSObject <FCPrivateDataSyncCondition>

@property (getter=isSatisfied, nonatomic, readonly) bool satisfied;

- (id)_appState;
- (id)description;
- (bool)isSatisfied;

@end
