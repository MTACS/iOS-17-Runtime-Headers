
@interface BNBannerSourceListenerPresentableRejectionAction : BSAction

@property (nonatomic, readonly, copy) NSString *rejectionReason;

- (bool)_expectsResponse;
- (id)initWithReason:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)rejectionReason;

@end
