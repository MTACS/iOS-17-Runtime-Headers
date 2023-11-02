
@interface LPARAssetAttachmentSubstitute : LPARAsset <NSSecureCoding> {
    long long  _index;
}

@property (nonatomic) long long index;

+ (bool)supportsSecureCoding;

- (bool)_isSubstitute;
- (void)encodeWithCoder:(id)arg1;
- (long long)index;
- (id)initWithARAsset:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIndex:(long long)arg1;

@end
