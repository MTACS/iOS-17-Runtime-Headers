
@interface HMDHH2FrameworkSwitchDefaultDataSource : NSObject <HMDHH2FrameworkSwitchDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isHH2Enabled;
@property (readonly) unsigned long long setupMode;
@property (readonly) Class superclass;

- (id)controller:(id)arg1 cloudDatabaseWithContainerID:(id)arg2;
- (bool)isHH2Enabled;
- (unsigned long long)setupMode;

@end
