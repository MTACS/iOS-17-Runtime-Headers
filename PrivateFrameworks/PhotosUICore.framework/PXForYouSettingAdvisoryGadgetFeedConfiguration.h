
@interface PXForYouSettingAdvisoryGadgetFeedConfiguration : PXFeedConfiguration

- (bool)allowsPopOnEmptyBehavior;
- (id)gadgetAccessoryButtonLocalizedTitle;
- (unsigned long long)gadgetAccessoryButtonType;
- (id)gadgetLocalizedTitle;
- (unsigned long long)gadgetType;
- (long long)horizontalGadgetStyle;
- (id)init;
- (bool)wantsEmbeddedScrollView;
- (bool)wantsMultilineGadgetTitle;

@end
