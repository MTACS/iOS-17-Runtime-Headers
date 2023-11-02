
@interface MRUSpatialAccessibilityObserver : NSObject {
    <MRUSpatialAccessibilityObserverDelegate> * _delegate;
    bool  _isHeadTrackingEnabled;
    bool  _isMonoAudioEnabled;
}

@property (nonatomic) <MRUSpatialAccessibilityObserverDelegate> *delegate;
@property (nonatomic) bool isHeadTrackingEnabled;
@property (nonatomic) bool isMonoAudioEnabled;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isHeadTrackingEnabled;
- (bool)isMonoAudioEnabled;
- (void)setDelegate:(id)arg1;
- (void)setIsHeadTrackingEnabled:(bool)arg1;
- (void)setIsMonoAudioEnabled:(bool)arg1;
- (void)updateHeadTrackingSupported;
- (void)updateMonoAudioEnabled;

@end
