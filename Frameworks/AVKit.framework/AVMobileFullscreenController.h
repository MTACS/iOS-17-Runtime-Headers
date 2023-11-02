
@interface AVMobileFullscreenController : NSObject {
    <AVMobileFullscreenControllerDelegate> * _delegate;
    AVPlayerViewController * _playerViewController;
    unsigned long long  _presentationState;
}

@property (nonatomic) <AVMobileFullscreenControllerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long presentationState;

- (void).cxx_destruct;
- (id)delegate;
- (void)enterFullscreen:(id)arg1;
- (void)exitFullscreen:(id)arg1;
- (id)initWithPlayerViewController:(id)arg1;
- (unsigned long long)presentationState;
- (void)setDelegate:(id)arg1;
- (void)updatePresentationStateTo:(unsigned long long)arg1;

@end
