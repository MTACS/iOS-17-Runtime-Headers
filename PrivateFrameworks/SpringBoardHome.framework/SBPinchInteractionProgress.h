
@interface SBPinchInteractionProgress : UIInteractionProgress <UIGestureRecognizerDelegate> {
    UIPinchGestureRecognizer * _pinchGesture;
    struct { 
        struct { 
            double value; 
            bool inclusive; 
        } start; 
        struct { 
            double value; 
            bool inclusive; 
        } end; 
    }  _pinchInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double minPinchScale;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGesture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePinchGesture:(id)arg1;
- (void)_updatePinchScale:(double)arg1;
- (id)initWithPinchGesture:(id)arg1 minPinchScale:(double)arg2;
- (double)minPinchScale;
- (id)pinchGesture;

@end
