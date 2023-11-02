
@interface SiriMessageTypes.SpeechStopDetectedMessage : SiriMessageTypes.RequestMessageBase {
    void lastTRPId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;

@end
