
@interface _NSUndoLightInvocation : _NSUndoObject {
    id  _arg;
    SEL  _selector;
}

- (id)_argument;
- (void)dealloc;
- (id)description;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)invoke;

@end
