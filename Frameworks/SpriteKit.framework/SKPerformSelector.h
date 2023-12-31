
@interface SKPerformSelector : SKAction {
    SEL  _selector;
    <NSObject> * _strongTarget;
    <NSObject> * _weakTarget;
}

+ (id)perfromSelector:(SEL)arg1 onTarget:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;

@end
