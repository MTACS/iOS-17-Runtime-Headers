
@interface SiriMessageTypes.StartSpeechDictationRequestMessage : SiriMessageTypes.StartRequestMessageBase {
    void dictationOptions;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;

@end
