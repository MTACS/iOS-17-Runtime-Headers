
@protocol PXLibrarySummaryOutputPresenter <NSObject>

@optional

- (NSAttributedString *)attributedTitle;
- (NSDictionary *)defaultAttributes;
- (NSDictionary *)emphasizedAttributes;
- (void)setAttributedTitle:(NSAttributedString *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setWantsDisclosureIndicator:(bool)arg1;
- (NSString *)subtitle;
- (NSString *)title;
- (bool)wantsDisclosureIndicator;

@end
