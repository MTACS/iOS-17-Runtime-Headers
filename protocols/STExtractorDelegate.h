
@protocol STExtractorDelegate <NSObject>

@optional

- (void)extractionCompleteAtArchivePath:(NSString *)arg1;
- (void)extractionEnteredPassthroughMode;
- (void)setExtractionProgress:(double)arg1;

@end
