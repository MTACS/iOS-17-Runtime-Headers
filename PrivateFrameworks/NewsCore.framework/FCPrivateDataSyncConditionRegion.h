
@interface FCPrivateDataSyncConditionRegion : NSObject <FCPrivateDataSyncCondition>

@property (getter=isSatisfied, nonatomic, readonly) bool satisfied;

- (id)description;
- (bool)isSatisfied;

@end
