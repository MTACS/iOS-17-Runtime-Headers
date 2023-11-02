
@interface HDPowerAssertion : NSObject {
    unsigned int  _assertionID;
    NSString * _identifier;
    _Atomic bool  _invalidated;
    double  _timeout;
    id /* block */  _timeoutHandler;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly, copy) NSString *identifier;
@property (readonly) bool invalidated;
@property (readonly) double timeout;

+ (id)powerAssertionWithIdentifier:(id)arg1 timeout:(double)arg2 timeoutHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)identifier;
- (id)init;
- (void)invalidate;
- (bool)invalidated;
- (double)timeout;

@end
