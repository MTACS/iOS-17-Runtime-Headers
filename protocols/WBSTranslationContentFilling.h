
@protocol WBSTranslationContentFilling <NSObject>

@required

- (<WBSTranslationContentFillingDelegate> *)fillingDelegate;
- (void)replaceExtractedContent:(_WKTextManipulationItem *)arg1 withTranslatedContent:(_WKTextManipulationItem *)arg2 targetLocale:(NSString *)arg3;
- (void)setFillingDelegate:(id <WBSTranslationContentFillingDelegate>)arg1;

@end
