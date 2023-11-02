
@interface VSVoiceSubscription : NSObject <NSSecureCoding> {
    NSString * _accessoryID;
    NSString * _clientID;
    VSVoiceAsset * _voice;
}

@property (nonatomic, retain) NSString *accessoryID;
@property (nonatomic, retain) NSString *clientID;
@property (nonatomic, retain) VSVoiceAsset *voice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryID;
- (id)clientID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClient:(id)arg1 accessory:(id)arg2 voice:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setAccessoryID:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setVoice:(id)arg1;
- (id)voice;

@end
