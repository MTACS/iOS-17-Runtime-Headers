
@interface NPKAssertion : NSObject {
    NSString * _reason;
    unsigned long long  _state;
    unsigned long long  _type;
}

@property (getter=isAcquired, nonatomic, readonly) bool acquired;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) unsigned long long state;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_errorWithUnderlyingError:(id)arg1;
- (void)acquireWithCompletion:(id /* block */)arg1;
- (id)initWithType:(unsigned long long)arg1 reason:(id)arg2;
- (void)invalidateWithCompletion:(id /* block */)arg1;
- (bool)isAcquired;
- (id)reason;
- (unsigned long long)state;
- (unsigned long long)type;

@end
