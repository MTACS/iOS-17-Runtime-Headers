
@interface IMAVDaemonListener : NSObject {
    NSMutableArray * _handlers;
    bool  _postedSetupComplete;
    bool  _setupComplete;
}

@property (nonatomic, readonly) bool isSetupComplete;

- (void).cxx_destruct;
- (void)_noteDisconnected;
- (void)addHandler:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (bool)isSetupComplete;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeHandler:(id)arg1;
- (void)setupComplete:(bool)arg1 info:(id)arg2;

@end
