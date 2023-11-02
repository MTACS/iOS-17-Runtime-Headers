
@interface VKRecognizedText : VKRecognizedItem {
    NSMutableDictionary * _transcripts;
}

@property (nonatomic, readonly) VNRecognizedTextObservation *observation;
@property (nonatomic, readonly) NSString *transcript;

- (void).cxx_destruct;
- (void)associateWithItem:(id)arg1;
- (id)description;
- (id)initWithFrameInfo:(id)arg1 textBlockObservation:(id)arg2;
- (id)observation;
- (bool)shouldAssociateWithItem:(id)arg1;
- (id)transcript;

@end
