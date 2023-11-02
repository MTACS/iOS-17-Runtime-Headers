
@interface SBFAlwaysOnLiveRenderingAssertion : NSObject <BSInvalidatable> {
    NSDate * _createdAt;
    id /* block */  _invalidationHandler;
    NSString * _reason;
    double  _timeout;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startAutoInvalidationTimer;
- (id)createdAt;
- (void)dealloc;
- (id)description;
- (id)initWithReason:(id)arg1 invalidationHandler:(id /* block */)arg2;
- (id)initWithReason:(id)arg1 timeout:(double)arg2 invalidationHandler:(id /* block */)arg3;
- (void)invalidate;
- (bool)isValid;
- (id)reason;

@end
