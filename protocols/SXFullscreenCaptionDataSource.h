
@protocol SXFullscreenCaptionDataSource <NSObject>

@required

- (<SXComponentTextStyle> *)componentTextStyleForIdentifier:(NSString *)arg1 inheritingFromComponentTextStyle:(SXComponentTextStyle *)arg2;
- (NSString *)contentSizeCategoryForCaption:(SXFullscreenCaption *)arg1;
- (SXTextResizer *)textResizerForCaption:(SXFullscreenCaption *)arg1;
- (SXComponentTextRules *)textRulesForCaption:(SXFullscreenCaption *)arg1;
- (<SXTextStyle> *)textStyleForIdentifier:(NSString *)arg1;

@end
