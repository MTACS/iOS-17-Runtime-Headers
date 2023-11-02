
@interface CLSettingsManagerMock : CLSettingsManagerInternal <CLSettingsManagerMockProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool valid;

- (id)init;
- (void)setSettings:(id)arg1;

@end
