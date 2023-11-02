
@interface ANAnnouncementContent : NSObject <NSSecureCoding> {
    NSURL * _audioFileURL;
    NSString * _endpointIdentifier;
    NSUUID * _homeKitUserIdentifier;
    NSString * _transcription;
}

@property (nonatomic, retain) NSURL *audioFileURL;
@property (nonatomic, retain) NSString *transcription;

+ (id)contentWithAudioFileURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audioFileURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointIdentifier;
- (id)homeKitUserIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAudioFileURL:(id)arg1;
- (void)setEndpointIdentifier:(id)arg1;
- (void)setHomeKitUserIdentifier:(id)arg1;
- (void)setTranscription:(id)arg1;
- (id)transcription;

@end
