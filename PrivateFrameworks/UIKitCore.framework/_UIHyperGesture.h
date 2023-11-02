
@interface _UIHyperGesture : NSObject {
    <_UIHyperGestureDelegate> * __delegate;
    _UIHyperInteractor * __interactor;
}

@property (setter=_setDelegate:, nonatomic) <_UIHyperGestureDelegate> *_delegate;
@property (setter=_setInteractor:, nonatomic, retain) _UIHyperInteractor *_interactor;

- (void).cxx_destruct;
- (id)_delegate;
- (void)_getCurrentTranslation:(double*)arg1;
- (void)_getCurrentVelocity:(double*)arg1;
- (void)_handleGesture:(id)arg1;
- (id)_interactor;
- (void)_setDelegate:(id)arg1;
- (void)_setInteractor:(id)arg1;
- (id)init;
- (id)initWithInteractor:(id)arg1;

@end
