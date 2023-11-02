
@interface AXMActiveSoundOutputActionHandle : AXMOutputActionHandle {
    <AXMActiveSoundOutputActionHandleProvider> * _handleProvider;
}

@property (nonatomic, retain) <AXMActiveSoundOutputActionHandleProvider> *handleProvider;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;

- (void).cxx_destruct;
- (id)handleProvider;
- (float)pitch;
- (float)rate;
- (void)setHandleProvider:(id)arg1;
- (void)setPitch:(float)arg1;
- (void)setQuantizedRate:(long long)arg1;
- (void)setRate:(float)arg1;
- (void)stop;

@end
