
@interface WKWallpaperAdjustmentTraits : NSObject <NSCopying> {
    WKWallpaperAdjustmentTraitOffset * _offset;
}

@property (nonatomic, readonly) WKWallpaperAdjustmentTraitOffset *offset;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)offset;
- (id)propertyListRepresentation;
- (id)wk_descriptionBuilder;

@end
