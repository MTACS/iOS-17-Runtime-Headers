
@interface CACGestureLivePreviewViewController : UIViewController <CACViewController> {
    NSMutableDictionary * _mappedPathEffectViews;
}

@property (nonatomic, readonly) bool isOverlay;
@property (nonatomic, retain) NSMutableDictionary *mappedPathEffectViews;
@property (nonatomic, readonly) long long zOrder;

- (void).cxx_destruct;
- (void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)arg1 forces:(id)arg2 atTime:(double)arg3;
- (bool)isOverlay;
- (id)mappedPathEffectViews;
- (id)newPathEffectView;
- (void)removeTrackingForFingerIdentifier:(id)arg1;
- (void)setMappedPathEffectViews:(id)arg1;
- (void)viewDidLoad;
- (long long)zOrder;

@end
