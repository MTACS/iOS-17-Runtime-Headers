
@interface STExtractionOriginator : NSObject <STExtractionOriginatorProtocol> {
    <STExtractionOriginatorProtocol> * _originator;
}

@property <STExtractionOriginatorProtocol> *originator;

- (void).cxx_destruct;
- (id)originator;
- (void)remote_extractionCompleteAtArchivePath:(id)arg1;
- (void)remote_extractionEnteredPassthroughMode;
- (void)remote_setExtractionProgress:(double)arg1;
- (void)setOriginator:(id)arg1;

@end
