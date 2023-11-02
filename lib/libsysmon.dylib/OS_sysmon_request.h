
@interface OS_sysmon_request : OS_sysmon_object <OS_sysmon_request>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (oneway void)release;

@end
