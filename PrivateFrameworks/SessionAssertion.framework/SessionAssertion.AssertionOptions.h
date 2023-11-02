
@interface SessionAssertion.AssertionOptions : NSObject {
    void invalidateOnSessionRequest;
}

- (id)init;
- (id)initWithInvalidateOnSessionRequest:(bool)arg1;

@end
