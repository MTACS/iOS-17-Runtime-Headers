
@interface CXChannelProviderConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _audioSessionID;
}

@property (nonatomic) unsigned int audioSessionID;

+ (bool)supportsSecureCoding;

- (unsigned int)audioSessionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
