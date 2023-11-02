
@interface _BlastDoorLPImageAttachmentSubstitute : _BlastDoorLPImage <NSSecureCoding> {
    unsigned long long  _index;
}

@property (nonatomic) unsigned long long index;

+ (bool)supportsSecureCoding;

- (bool)_shouldEncodeData;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
