
@interface _ATXNotificationGroupStatelessRandomizingRanker : NSObject <ATXNotificationGroupRankerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)rankerId;

- (unsigned long long)_generateNumSwaps:(id)arg1;
- (double)_standardUniformDistribution;
- (id)randomlySwapGroups:(id)arg1;
- (id)rankNotificationGroups:(id)arg1 modeId:(id)arg2;

@end
