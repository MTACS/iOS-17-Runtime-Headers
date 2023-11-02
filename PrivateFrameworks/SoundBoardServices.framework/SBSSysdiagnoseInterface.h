
@interface SBSSysdiagnoseInterface : NSObject {
    NSXPCConnection * _sbConnection;
    <SBSSysdiagnoseImplementer> * _sbProxy;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)sysdiagnoseHasStarted:(bool)arg1;

@end
