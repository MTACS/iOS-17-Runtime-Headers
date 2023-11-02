
@interface SessionAssertion.ProminentPresentationAssertion : NSObject {
    void attributeAssertion;
    void invalidationHandler;
}

@property (nonatomic, readonly) NSString *activityIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *explanation;
@property (nonatomic, readonly) unsigned long long snaInvalidationReason;
@property (nonatomic, readonly) NSString *snaSessionIdentifier;
@property (nonatomic, readonly) unsigned long long snaState;

- (void).cxx_destruct;
- (id)activityIdentifier;
- (id)description;
- (id)explanation;
- (id)init;
- (id)initWithExplanation:(id)arg1 activityIdentifier:(id)arg2 duration:(double)arg3 invalidationHandler:(id /* block */)arg4;
- (void)invalidate;
- (unsigned long long)snaInvalidationReason;
- (id)snaSessionIdentifier;
- (unsigned long long)snaState;

@end
