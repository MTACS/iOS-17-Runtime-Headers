
@protocol SZExtractorDelegate <NSObject, STExtractorDelegate>

@optional

- (void)extractionCompleteAtArchivePath:(NSString *)arg1;
- (void)extractionEnteredPassThroughMode;
- (void)setExtractionProgress:(double)arg1;

@end
