
@interface CATTransition : NSObject {
    SEL  _action;
    CATState * _state;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) CATState *state;

+ (id)new;

- (void).cxx_destruct;
- (SEL)action;
- (id)description;
- (id)init;
- (id)initWithState:(id)arg1 action:(SEL)arg2;
- (id)state;

@end
