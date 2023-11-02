
@interface _NSThreadPerformInfo : NSObject {
    id  _argument;
    NSArray * _modes;
    _Atomic unsigned long long  _pac_signature;
    SEL  _selector;
    int  _state;
    id  _target;
    NSCondition * _waiter;
}

- (void)dealloc;
- (void)signal:(int)arg1;
- (int)wait;

@end
