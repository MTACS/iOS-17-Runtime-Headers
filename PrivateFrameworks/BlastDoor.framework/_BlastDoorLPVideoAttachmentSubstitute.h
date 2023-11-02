
@interface _BlastDoorLPVideoAttachmentSubstitute : _BlastDoorLPVideo <NSSecureCoding> {
    unsigned long long  _index;
}

@property (nonatomic) unsigned long long index;

+ (bool)supportsSecureCoding;

- (bool)_shouldEncodeData;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideo:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
