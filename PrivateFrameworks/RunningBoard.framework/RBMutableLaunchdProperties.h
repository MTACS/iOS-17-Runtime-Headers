
@interface RBMutableLaunchdProperties : RBLaunchdProperties

- (id)initWithProperties:(id)arg1;
- (void)setDisableFreezing:(bool)arg1;
- (void)setDoesOverrideManagement:(bool)arg1;
- (void)setExecutablePath:(id)arg1;
- (void)setHostPid:(int)arg1;
- (void)setIsAngel;
- (void)setIsDaemon;
- (void)setJobLabel:(id)arg1;
- (void)setMultiInstance:(bool)arg1;
- (void)setOverrideManageFlags:(unsigned char)arg1;
- (void)setPath:(id)arg1;
- (void)setSpecifiedIdentity:(id)arg1;
- (void)setUnderlyingAssertion:(id)arg1;
- (void)setVariableEUID:(bool)arg1;

@end
