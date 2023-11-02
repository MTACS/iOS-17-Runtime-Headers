
@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol> {
    <SZExtractorDelegate> * delegate;
}

@property <SZExtractorDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)extractionCompleteAtArchivePath:(id)arg1;
- (void)extractionEnteredPassThroughMode;
- (void)setDelegate:(id)arg1;
- (void)setExtractionProgress:(double)arg1;

@end
