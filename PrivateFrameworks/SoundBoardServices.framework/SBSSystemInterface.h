
@interface SBSSystemInterface : NSObject {
    NSXPCConnection * _sbConnection;
    <SBSSystemImplementer> * _sbProxy;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)identifyWithOptions:(id)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)intercomWithOptions:(id)arg1;
- (void)obliterate:(id)arg1;
- (void)reboot:(id)arg1;
- (void)requestDeferredReboot;
- (void)setTurnOffBrightnessFactor:(bool)arg1;

@end
