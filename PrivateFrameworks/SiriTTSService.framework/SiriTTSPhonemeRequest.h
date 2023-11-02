
@interface SiriTTSPhonemeRequest : SiriTTSBaseRequest {
    void phonemeSystem;
    void text;
    void voice;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long phonemeSystem;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 voice:(id)arg2 phonemeSystem:(long long)arg3;
- (long long)phonemeSystem;
- (void)setPhonemeSystem:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setVoice:(id)arg1;
- (id)text;
- (id)voice;

@end
