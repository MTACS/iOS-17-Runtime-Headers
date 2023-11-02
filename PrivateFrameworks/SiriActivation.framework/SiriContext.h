
@interface SiriContext : NSObject <NSCopying, NSSecureCoding> {
    SiriContextOverride * _contextOverride;
    AFSpeechRequestOptions * _speechRequestOptions;
}

@property (nonatomic, retain) SiriContextOverride *contextOverride;
@property (nonatomic, readonly) AFSpeechRequestOptions *speechRequestOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextOverride;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextOverride:(id)arg1;
- (id)initWithSpeechRequestOptions:(id)arg1;
- (void)setContextOverride:(id)arg1;
- (id)speechRequestOptions;

@end
