
@interface BTCloudSoundProfileRecord : NSObject <NSSecureCoding> {
    NSData * _soundProfileData;
    NSURL * _soundProfileFileURL;
}

@property (nonatomic, retain) NSData *soundProfileData;
@property (nonatomic, retain) NSURL *soundProfileFileURL;

+ (id)soundProfileRecordWithCustomData:(id)arg1;
+ (id)soundProfileRecordWithFileURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomData:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (void)setSoundProfileData:(id)arg1;
- (void)setSoundProfileFileURL:(id)arg1;
- (id)soundProfileData;
- (id)soundProfileFileURL;

@end
