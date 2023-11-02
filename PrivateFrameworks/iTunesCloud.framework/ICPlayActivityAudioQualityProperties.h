
@interface ICPlayActivityAudioQualityProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    long long  _bitDepth;
    long long  _bitRate;
    NSString * _channelLayoutDescription;
    unsigned int  _codec;
    long long  _sampleRate;
    bool  _spatialized;
}

@property (nonatomic, readonly) long long bitDepth;
@property (nonatomic, readonly) long long bitRate;
@property (nonatomic, readonly) NSString *channelLayoutDescription;
@property (nonatomic, readonly) unsigned int codec;
@property (nonatomic, readonly) NSString *codecString;
@property (nonatomic, readonly) long long sampleRate;
@property (getter=isSpatialized, nonatomic, readonly) bool spatialized;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone { }*)arg2;
- (long long)bitDepth;
- (long long)bitRate;
- (id)channelLayoutDescription;
- (unsigned int)codec;
- (id)codecString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSpatialized;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)sampleRate;

@end
