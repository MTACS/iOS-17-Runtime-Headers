
@protocol WBSTranslationContentExtractionDelegate <NSObject>

@optional

- (void)contentExtractor:(id <WBSTranslationContentExtracting>)arg1 didExtractContent:(NSArray *)arg2;
- (void)contentExtractorDidBeginExtractingContent:(id <WBSTranslationContentExtracting>)arg1;
- (void)contentExtractorDidFinishExtractingInitialContent:(id <WBSTranslationContentExtracting>)arg1;
- (void)contentExtractorDidStopExtractingContent:(id <WBSTranslationContentExtracting>)arg1;
- (NSString *)sourceLocaleForContentExtractor:(id <WBSTranslationContentExtracting>)arg1;
- (NSString *)targetLocaleForContentExtractor:(id <WBSTranslationContentExtracting>)arg1;

@end
