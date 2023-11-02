
@interface _ATXNotificationGroupBaseRanker : NSObject <ATXNotificationGroupRankerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)rankerId;

- (id)_initialGroupComparisonValue:(id)arg1;
- (long long)compareGroups:(id)arg1 group2:(id)arg2;
- (id)rankNotificationGroups:(id)arg1 modeId:(id)arg2;

@end
