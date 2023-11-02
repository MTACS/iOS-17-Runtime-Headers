
@interface SiriTTSVoiceSubscription : NSObject <NSSecureCoding> {
    void accessoryId;
    void clientId;
    void voice;
}

@property (nonatomic, copy) NSString *accessoryId;
@property (nonatomic, copy) NSString *clientId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryId;
- (id)clientId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoice:(id)arg1 clientId:(id)arg2 accessoryId:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setAccessoryId:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setVoice:(id)arg1;
- (id)voice;

@end
