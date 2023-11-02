
@protocol WBSTranslationContentExtracting <NSObject>

@required

- (void)beginExtractingContent;
- (<WBSTranslationContentExtractionDelegate> *)extractionDelegate;
- (void)setExtractionDelegate:(id <WBSTranslationContentExtractionDelegate>)arg1;
- (void)stopExtractingContent;

@end
