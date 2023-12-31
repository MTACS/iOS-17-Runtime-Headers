
@interface HMDAudioCodecGroup : HAPNumberParser <NSCopying, NSSecureCoding> {
    unsigned long long  _codec;
}

@property (nonatomic, readonly) unsigned long long codec;

+ (id)arrayWithCodecs:(id)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)codec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAudioCodecGroup:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTLVData:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
