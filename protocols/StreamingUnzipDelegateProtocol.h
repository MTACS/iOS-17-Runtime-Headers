
@protocol StreamingUnzipDelegateProtocol

@required

- (void)extractionCompleteAtArchivePath:(NSString *)arg1;
- (void)extractionEnteredPassThroughMode;
- (void)setExtractionProgress:(double)arg1;

@end
