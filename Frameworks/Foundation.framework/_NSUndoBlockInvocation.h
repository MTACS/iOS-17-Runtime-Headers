
@interface _NSUndoBlockInvocation : _NSUndoObject {
    id /* block */  _handler;
}

- (void)dealloc;
- (id)initWithTarget:(id)arg1 handler:(id /* block */)arg2;
- (void)invoke;

@end
