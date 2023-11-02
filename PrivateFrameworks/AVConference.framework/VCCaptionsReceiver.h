
@interface VCCaptionsReceiver : NSObject {
    struct opaqueVCCaptionsDecoder { } * _captionsDecoder;
    unsigned int  _captionsLastUpdateNumber;
    unsigned int  _captionsLastUtteranceNumber;
    VCCaptionsTranscription * _currentTranscription;
    id  _delegate;
}

@property (nonatomic, retain) VCCaptionsTranscription *currentTranscription;
@property (readonly) <VCCaptionsReceiverDelegate> *delegate;

- (id)currentTranscription;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setCurrentTranscription:(id)arg1;

@end
