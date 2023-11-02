
@interface RTTTranscriptionController : NSObject {
    NSString * _currentCallUUID;
    NSString * _currentTranscription;
    <RTTTranscriptionControllerDelegate> * _delegate;
    AXLTLiveTranscription * _transcriber;
}

@property (nonatomic, retain) NSString *currentCallUUID;
@property (nonatomic, retain) NSString *currentTranscription;
@property (nonatomic) <RTTTranscriptionControllerDelegate> *delegate;
@property (nonatomic, retain) AXLTLiveTranscription *transcriber;

- (void).cxx_destruct;
- (id)currentCallUUID;
- (id)currentTranscription;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setCurrentCallUUID:(id)arg1;
- (void)setCurrentTranscription:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTranscriber:(id)arg1;
- (void)startTranscribingForCallUUID:(id)arg1;
- (void)stopTranscribingForCallUUID:(id)arg1;
- (id)transcriber;

@end
