
@interface _MKDirectionalArrowRecognizer : NSObject {
    SEL  _action;
    long long  _arrows;
    long long  _lastArrows;
    long long  _modifierFlags;
    long long  _state;
    id  _target;
}

@property (nonatomic, readonly) long long arrows;
@property (nonatomic, readonly) long long lastArrows;
@property (nonatomic) long long modifierFlags;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (long long)arrows;
- (void)handleArrowMask:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (long long)lastArrows;
- (long long)modifierFlags;
- (void)setModifierFlags:(long long)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
