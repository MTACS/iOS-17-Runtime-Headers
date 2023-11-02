
@interface SVXStoreDemo : NSObject <NSCopying, NSSecureCoding> {
    long long  _gender;
    NSString * _languageCode;
    float  _outputVolume;
    long long  _transcriptID;
}

@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (nonatomic, readonly) float outputVolume;
@property (nonatomic, readonly) long long transcriptID;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)gender;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTranscriptID:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 outputVolume:(float)arg4;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (float)outputVolume;
- (long long)transcriptID;

@end
