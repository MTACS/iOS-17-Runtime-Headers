
@interface _UIWeakDisplayLinkTarget : NSObject {
    SEL  _action;
    id  _target;
}

+ (SEL)displayLinkAction;

- (void).cxx_destruct;
- (void)_displayLinkTick:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
