
@interface _BlastDoorLPARAssetAttachmentSubstitute : _BlastDoorLPARAsset <NSSecureCoding> {
    unsigned long long  _index;
}

@property (nonatomic) unsigned long long index;

+ (bool)supportsSecureCoding;

- (bool)_shouldEncodeData;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)index;
- (id)initWithARAsset:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
