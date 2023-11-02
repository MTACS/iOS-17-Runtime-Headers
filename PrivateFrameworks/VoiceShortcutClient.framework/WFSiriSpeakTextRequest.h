
@interface WFSiriSpeakTextRequest : WFSiriActionRequest {
    NSString * _utterance;
}

@property (nonatomic, readonly, copy) NSString *utterance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUtterance:(id)arg1;
- (id)utterance;

@end
