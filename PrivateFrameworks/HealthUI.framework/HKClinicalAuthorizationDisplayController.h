
@interface HKClinicalAuthorizationDisplayController : NSObject {
    HKClinicalSourceAuthorizationController * _authorizationController;
}

@property (nonatomic, readonly) HKClinicalSourceAuthorizationController *authorizationController;
@property (nonatomic, readonly, copy) HKSource *source;

- (void).cxx_destruct;
- (id)_displayReadAuthorizationDateForMode:(long long)arg1;
- (id)_displayStringForReadAuthorizationDate:(id)arg1;
- (id)authorizationController;
- (id)committedTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(id /* block */)arg2;
- (id)currentTimeDisplayStringForReadAuthorizationFooter;
- (id)currentTimeTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithAuthorizationController:(id)arg1;
- (id)source;

@end
