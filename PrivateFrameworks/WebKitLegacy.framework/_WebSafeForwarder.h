
@interface _WebSafeForwarder : NSObject {
    _WebSafeAsyncForwarder * _asyncForwarder;
    id  _defaultTarget;
    id  _target;
}

@property (nonatomic, readonly) id asyncForwarder;

- (id)asyncForwarder;
- (void)clearTarget;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
