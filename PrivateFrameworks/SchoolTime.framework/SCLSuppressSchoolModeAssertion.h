
@interface SCLSuppressSchoolModeAssertion : NSObject {
    NSUUID * _UUID;
    NSXPCConnection * _connection;
    NSString * _explanation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _state;
}

@property (nonatomic, readonly, copy) NSString *explanation;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (bool)acquireWithError:(out id*)arg1;
- (void)acquireWithInvalidationHandler:(id /* block */)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)description;
- (id)explanation;
- (id)initWithExplanation:(id)arg1;
- (void)invalidate;
- (bool)isValid;

@end
