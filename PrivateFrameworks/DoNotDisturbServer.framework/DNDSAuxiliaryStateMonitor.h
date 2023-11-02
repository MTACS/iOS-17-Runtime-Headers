
@interface DNDSAuxiliaryStateMonitor : NSObject {
    bool  _presentationModeEnabled;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _screenMirrored;
    bool  _screenShared;
}

@property (getter=isPresentationModeEnabled, nonatomic, readonly) bool presentationModeEnabled;
@property (getter=isScreenMirrored, nonatomic) bool screenMirrored;
@property (getter=isScreenShared, nonatomic) bool screenShared;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)isPresentationModeEnabled;
- (bool)isScreenMirrored;
- (bool)isScreenShared;
- (void)setScreenMirrored:(bool)arg1;
- (void)setScreenShared:(bool)arg1;

@end
