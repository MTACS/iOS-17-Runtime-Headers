
@interface CBDisplayModule : CBModule <CBContainerModuleProtocol, CBStatusInfoProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyIdentifiers;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (id)copyPropertyInternalForKey:(id)arg1;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)start;
- (void)stop;

@end