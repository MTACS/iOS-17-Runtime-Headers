
@interface SNAAssertion : NSObject {
    id /* block */  _invalidationHandler;
    _TtC16SessionAssertion23SessionRequestAssertion * _sessionAssertion;
}

@property (nonatomic, readonly, copy) NSString *explanation;
@property (nonatomic, readonly) unsigned long long invalidationReason;
@property (nonatomic, readonly, copy) NSArray *sessionIdentifiers;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly, copy) SNAAssertionTarget *target;

// Image: /System/Library/PrivateFrameworks/SessionAssertion.framework/SessionAssertion

- (void).cxx_destruct;
- (id)explanation;
- (id)init;
- (id)initWithExplanation:(id)arg1 target:(id)arg2 invalidateOnSessionRequest:(bool)arg3 invalidationHandler:(id /* block */)arg4;
- (id)initWithExplanation:(id)arg1 target:(id)arg2 invalidationHandler:(id /* block */)arg3;
- (void)invalidate;
- (unsigned long long)invalidationReason;
- (id)sessionIdentifiers;
- (unsigned long long)state;
- (id)target;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)_invalidationReasonString;
- (id)_stateString;
- (id)hd_description;

@end
