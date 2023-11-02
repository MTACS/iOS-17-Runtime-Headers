
@interface WKAbstractWallpaper : NSObject <NAIdentifiable, WKDescribable, WKWallpaper> {
    unsigned long long  _backingType;
    long long  _identifier;
    NSString * _name;
    unsigned long long  _representedType;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long backingType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ descriptionBuilderBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) unsigned long long representedType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsCopying;
@property (nonatomic, readonly) bool supportsSerialization;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, readonly, copy) NSURL *thumbnailImageURL;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) NADescriptionBuilder *wk_descriptionBuilder;

+ (id)na_identity;
+ (id)new;

- (void).cxx_destruct;
- (unsigned long long)backingType;
- (bool)copyWallpaperContentsToDestinationDirectoryURL:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (long long)identifier;
- (id)init;
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2 type:(unsigned long long)arg3 representedType:(unsigned long long)arg4 backingType:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)propertyListRepresentation;
- (unsigned long long)representedType;
- (void)setBackingType:(unsigned long long)arg1;
- (void)setRepresentedType:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (bool)supportsCopying;
- (bool)supportsSerialization;
- (id)thumbnailImage;
- (id)thumbnailImageURL;
- (unsigned long long)type;
- (id)wk_descriptionBuilder;

@end
