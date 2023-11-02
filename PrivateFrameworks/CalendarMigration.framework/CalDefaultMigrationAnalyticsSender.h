
@interface CalDefaultMigrationAnalyticsSender : NSObject <CalMigrationAnalyticsSender>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)sendEvent:(id)arg1 withPayload:(id)arg2;

@end
