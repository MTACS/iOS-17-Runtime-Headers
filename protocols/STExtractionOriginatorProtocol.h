
@protocol STExtractionOriginatorProtocol

@required

- (void)remote_extractionCompleteAtArchivePath:(NSString *)arg1;
- (void)remote_extractionEnteredPassthroughMode;
- (void)remote_setExtractionProgress:(double)arg1;

@end
