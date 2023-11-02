
@interface ActivityUIServices.CancellableAssertion : NSObject <BSInvalidatable> {
    void token;
}

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;

@end
