
@interface TPSAssetSizes : TPSSerializableObject <NSCopying, NSSecureCoding> {
    TPSSizes * _collectionFeatured;
    TPSSizes * _thumbnail;
    TPSSizes * _tip;
    TPSSizes * _tipIntro;
}

@property (nonatomic, retain) TPSSizes *collectionFeatured;
@property (nonatomic, retain) TPSSizes *thumbnail;
@property (nonatomic, retain) TPSSizes *tip;
@property (nonatomic, retain) TPSSizes *tipIntro;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collectionFeatured;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setCollectionFeatured:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTip:(id)arg1;
- (void)setTipIntro:(id)arg1;
- (id)thumbnail;
- (id)tip;
- (id)tipIntro;

@end
