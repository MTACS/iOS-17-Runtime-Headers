
@interface MNHapticResourceController : NSObject {
    <MNHapticControllerDelegate> * _delegate;
    bool  _isVibrating;
}

@property (nonatomic) <MNHapticControllerDelegate> *delegate;
@property (nonatomic, readonly) bool vibrating;

- (void).cxx_destruct;
- (id)delegate;
- (bool)playHapticSound:(unsigned long long)arg1 andReport:(out id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)stopVibrating;
- (bool)triggerVibration;
- (bool)vibrating;

@end
