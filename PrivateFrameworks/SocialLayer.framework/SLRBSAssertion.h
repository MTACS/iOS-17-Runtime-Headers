
@interface SLRBSAssertion : NSObject {
    RBSAssertion * _assertion;
}

@property (nonatomic, readonly) RBSAssertion *assertion;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)assertionNameForType:(long long)arg1;
+ (id)assertionWithType:(long long)arg1 pid:(int)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)assertion;
- (void)dealloc;
- (id)initWithType:(long long)arg1 pid:(int)arg2 error:(id*)arg3;
- (void)invalidate;
- (bool)isValid;

@end
