
@interface RealityKit.EntityTranslationGestureRecognizer : UIGestureRecognizer {
    void entity;
    void hasBegun;
    void lastFrameTime;
    void lastScreenLocation;
    void lastTranslation;
    void lastWorldLocation;
    void startingScreenLocation;
    void startingWorldLocation;
    void touchHeight;
    void velocity;
}

- (void).cxx_destruct;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
