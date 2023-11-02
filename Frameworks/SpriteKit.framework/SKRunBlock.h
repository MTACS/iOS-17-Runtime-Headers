
@interface SKRunBlock : SKAction {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)runBlock:(id /* block */)arg1 queue:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;

@end
