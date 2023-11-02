
@interface SBBannerGestureRecognizerPriorityAssertion : NSObject <BSInvalidatable> {
    bool  _enabled;
    id /* block */  _enablementChangeHandler;
    id /* block */  _invalidationHandler;
    long long  _priority;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

+ (bool)isValidBannerGestureRecognizerPriority:(long long)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithPriority:(long long)arg1 reason:(id)arg2 enablementChangeHandler:(id /* block */)arg3 invalidationHandler:(id /* block */)arg4;
- (void)invalidate;
- (bool)isEnabled;
- (long long)priority;
- (id)reason;
- (void)setEnabled:(bool)arg1;

@end
