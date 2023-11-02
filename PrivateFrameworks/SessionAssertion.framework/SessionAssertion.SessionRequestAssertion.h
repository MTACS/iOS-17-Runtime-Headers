
@interface SessionAssertion.SessionRequestAssertion : NSObject {
    void attributeAssertion;
    void invalidationHandler;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *explanation;
@property (nonatomic, readonly) NSArray *sessionIdentifiers;
@property (nonatomic, readonly) unsigned long long snaInvalidationReason;
@property (nonatomic, readonly) unsigned long long snaState;
@property (nonatomic, readonly) SNAAssertionTarget *snaTarget;

- (void).cxx_destruct;
- (id)description;
- (id)explanation;
- (id)init;
- (id)initWithExplanation:(id)arg1 target:(id)arg2 invalidateOnSessionRequest:(bool)arg3 invalidationHandler:(id /* block */)arg4;
- (id)initWithExplanation:(id)arg1 target:(id)arg2 options:(id)arg3 invalidationHandler:(id /* block */)arg4;
- (void)invalidate;
- (id)sessionIdentifiers;
- (unsigned long long)snaInvalidationReason;
- (unsigned long long)snaState;
- (id)snaTarget;

@end
