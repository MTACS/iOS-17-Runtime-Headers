
@protocol TPKContentViewDelegate <NSObject>

@required

- (void)contentView:(TPKBaseContentView *)arg1 actionTapped:(TPSURLAction *)arg2;
- (UIImage *)contentView:(TPKBaseContentView *)arg1 iconForCustomizationID:(long long)arg2;
- (void)contentView:(TPKBaseContentView *)arg1 needsLayoutForReason:(long long)arg2;
- (NSString *)contentView:(TPKBaseContentView *)arg1 personalizedStringForID:(long long)arg2;
- (void)contentView:(TPKBaseContentView *)arg1 viewTappedForIdentifier:(NSString *)arg2;
- (void)contentViewCloseButtonTapped:(TPKBaseContentView *)arg1;
- (void)contentViewWasCreated:(TPKBaseContentView *)arg1;
- (void)contentViewWillBeRemoved:(TPKBaseContentView *)arg1;
- (void)contentViewWillBeShown:(TPKBaseContentView *)arg1;

@end
