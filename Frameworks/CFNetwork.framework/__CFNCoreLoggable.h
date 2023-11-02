
@interface __CFNCoreLoggable : NSObject <__CFNCoreLoggableReq> {
    struct CoreLoggable { int (**x1)(); } * _loggable;
}

- (void)dealloc;
- (id)initWithLoggableName:(const char *)arg1;
- (const struct CoreLoggable { int (**x1)(); }*)loggable;

@end
