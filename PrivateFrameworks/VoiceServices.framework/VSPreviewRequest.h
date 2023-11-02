
@interface VSPreviewRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _languageCode;
    long long  _previewType;
    unsigned long long  _requestCreatedTimestamp;
    NSString * _voiceName;
}

@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) long long previewType;
@property (nonatomic) unsigned long long requestCreatedTimestamp;
@property (nonatomic, copy) NSString *voiceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)languageCode;
- (long long)previewType;
- (unsigned long long)requestCreatedTimestamp;
- (void)setLanguageCode:(id)arg1;
- (void)setPreviewType:(long long)arg1;
- (void)setRequestCreatedTimestamp:(unsigned long long)arg1;
- (void)setVoiceName:(id)arg1;
- (id)voiceName;

@end
