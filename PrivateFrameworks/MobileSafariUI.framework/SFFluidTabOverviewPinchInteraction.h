
@interface SFFluidTabOverviewPinchInteraction : SFFluidCollectionViewInteraction <UIGestureRecognizerDelegate> {
    SFFluidCollectionViewLayoutAttributes * _initialAttributes;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pinchStartLocation;
    NSIndexPath * _pinchedItemIndexPath;
    double  _targetScale;
    <SFFluidCollectionViewTrackedUpdateToken> * _trackedUpdateToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long pinchDirection;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, readonly) NSIndexPath *pinchedItemIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didReceivePinch:(id)arg1;
- (void)cancelInteraction;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (id)init;
- (long long)pinchDirection;
- (id)pinchGestureRecognizer;
- (id)pinchedItemIndexPath;
- (id)transformLayoutAttributes:(id)arg1;

@end
