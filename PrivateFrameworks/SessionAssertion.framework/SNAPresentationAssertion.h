
@interface SNAPresentationAssertion : NSObject {
    _TtC16SessionAssertion21PresentationAssertion * _assertion;
    id /* block */  _invalidationHandler;
}

@property (nonatomic, readonly, copy) NSString *explanation;
@property (nonatomic, readonly) unsigned long long invalidationReason;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (id)explanation;
- (id)init;
- (id)initWithExplanation:(id)arg1 sessionIdentifier:(id)arg2 presentationState:(unsigned long long)arg3 invalidationHandler:(id /* block */)arg4;
- (void)invalidate;
- (unsigned long long)invalidationReason;
- (id)sessionIdentifier;
- (unsigned long long)state;

@end
