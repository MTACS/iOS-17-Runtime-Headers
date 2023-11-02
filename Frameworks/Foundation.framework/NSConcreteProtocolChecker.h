
@interface NSConcreteProtocolChecker : NSProtocolChecker {
    Protocol * _protocol;
    NSObject * _target;
}

- (void)dealloc;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (id)protocol;
- (id)target;

@end
