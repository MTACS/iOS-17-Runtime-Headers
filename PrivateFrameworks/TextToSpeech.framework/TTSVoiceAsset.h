
@interface TTSVoiceAsset : TTSAssetBase <NSSecureCoding> {
    long long  _fileSize;
    long long  _footprint;
    long long  _gender;
    NSString * _identifier;
    bool  _isBuiltInVoice;
    bool  _isDownloading;
    bool  _isInstalled;
    NSArray * _languages;
    NSString * _name;
    bool  _neural;
    NSString * _voicePath;
    long long  _voiceType;
}

@property (nonatomic) long long fileSize;
@property (nonatomic, readonly) long long footprint;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isBuiltInVoice;
@property (nonatomic) bool isDownloading;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) NSArray *languages;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool neural;
@property (nonatomic, retain) NSString *voicePath;
@property (nonatomic) long long voiceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)fileSize;
- (long long)footprint;
- (long long)gender;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(bool)arg5 isBuiltIn:(bool)arg6 masteredVersion:(id)arg7 compatibilityVersion:(id)arg8 neural:(bool)arg9;
- (bool)isBuiltInVoice;
- (bool)isDownloading;
- (bool)isInstalled;
- (id)languages;
- (id)name;
- (bool)neural;
- (void)setFileSize:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsDownloading:(bool)arg1;
- (void)setVoicePath:(id)arg1;
- (void)setVoiceType:(long long)arg1;
- (id)voicePath;
- (long long)voiceType;

@end
