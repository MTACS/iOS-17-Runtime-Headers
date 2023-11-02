
@interface _SBUIPresentableDismissalPreventionAssertion : NSObject <SBUIPresentableDismissalPreventionAssertion> {
    long long  _dismissalSource;
    id /* block */  _invalidationHandler;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long dismissalSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

+ (bool)_isValidBannerDismissalSource:(long long)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (long long)dismissalSource;
- (id)initWithDismissalSource:(long long)arg1 reason:(id)arg2 invalidationHandler:(id /* block */)arg3;
- (void)invalidate;
- (id)reason;

@end
