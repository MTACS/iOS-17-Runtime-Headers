
@interface AVPresentationContextTransition : NSObject {
    long long  _finalInterfaceOrientation;
    bool  _hasAVKitAnimator;
    long long  _initialInterfaceOrientation;
    unsigned long long  _presenterSupportedOrientations;
    bool  _wasCancelledWithInactiveScene;
    bool  _wasInitiallyInteractive;
}

@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } counterRotationTransform;
@property (nonatomic) long long finalInterfaceOrientation;
@property (nonatomic) bool hasAVKitAnimator;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic, readonly) long long interfaceRotation;
@property (nonatomic, readonly) bool isRotated;
@property (nonatomic) unsigned long long presenterSupportedOrientations;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } rotationTransform;
@property (nonatomic) bool wasCancelledWithInactiveScene;
@property (nonatomic) bool wasInitiallyInteractive;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })counterRotationTransform;
- (long long)finalInterfaceOrientation;
- (bool)hasAVKitAnimator;
- (long long)initialInterfaceOrientation;
- (long long)interfaceRotation;
- (bool)isRotated;
- (unsigned long long)presenterSupportedOrientations;
- (bool)presenterSupportsOrientation:(long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rotationTransform;
- (void)setFinalInterfaceOrientation:(long long)arg1;
- (void)setHasAVKitAnimator:(bool)arg1;
- (void)setInitialInterfaceOrientation:(long long)arg1;
- (void)setPresenterSupportedOrientations:(unsigned long long)arg1;
- (void)setWasCancelledWithInactiveScene:(bool)arg1;
- (void)setWasInitiallyInteractive:(bool)arg1;
- (bool)wasCancelledWithInactiveScene;
- (bool)wasInitiallyInteractive;

@end
