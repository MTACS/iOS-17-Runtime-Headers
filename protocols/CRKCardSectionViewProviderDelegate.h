
@protocol CRKCardSectionViewProviderDelegate <NSObject>

@optional

- (double)boundingWidthForProvider:(id <CRKCardSectionViewProviding>)arg1;
- (bool)cardSectionDisplayRequiresUserConsentForProvider:(id <CRKCardSectionViewProviding>)arg1;
- (<CRKFeedbackDelegate> *)defaultFeedbackDelegateForProvider:(id <CRKCardSectionViewProviding>)arg1;

@end
