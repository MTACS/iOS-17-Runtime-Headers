
@interface CLFindMyAccessorySoundSequence : NSObject <NSCopying, NSSecureCoding> {
    NSMutableData * _encodedSequence;
    unsigned long long  _type;
}

@property (readonly) NSData *encodedSequence;
@property (readonly) unsigned long long type;

+ (id)defaultSequence;
+ (id)rangingSequence;
+ (id)shortSequence;
+ (bool)supportsSecureCoding;

- (void)addSoundBlockWithAsset:(unsigned long long)arg1 loopCount:(unsigned char)arg2 duration:(unsigned short)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedSequence;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 encodedSequence:(id)arg2;
- (unsigned long long)type;

@end
