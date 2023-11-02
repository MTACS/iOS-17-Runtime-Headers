
@interface ATXPosterConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _active;
    NSString * _color;
    NSArray * _complications;
    NSString * _extensionBundleIdentifier;
    NSString * _font;
    ATXFaceGalleryItem * _galleryItem;
    ATXComplication * _inlineComplication;
    NSArray * _landscapeComplications;
    NSUUID * _modeUUID;
    NSString * _numberingSystem;
    NSString * _posterUUID;
    bool  _selected;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly, copy) NSString *color;
@property (nonatomic, readonly, copy) NSArray *complications;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *font;
@property (nonatomic, readonly) ATXFaceGalleryItem *galleryItem;
@property (nonatomic, readonly) ATXComplication *inlineComplication;
@property (nonatomic, readonly, copy) NSArray *landscapeComplications;
@property (nonatomic, readonly) NSUUID *modeUUID;
@property (nonatomic, readonly, copy) NSString *numberingSystem;
@property (nonatomic, readonly, copy) NSString *posterUUID;
@property (getter=isSelected, nonatomic, readonly) bool selected;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (id)complications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (id)font;
- (id)galleryItem;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 active:(bool)arg2 selected:(bool)arg3 inlineComplication:(id)arg4 complications:(id)arg5 landscapeComplications:(id)arg6 modeUUID:(id)arg7 font:(id)arg8 color:(id)arg9 numberingSystem:(id)arg10 posterUUID:(id)arg11 galleryItem:(id)arg12;
- (id)initWithExtensionBundleIdentifier:(id)arg1 active:(bool)arg2 selected:(bool)arg3 inlineComplication:(id)arg4 complications:(id)arg5 modeUUID:(id)arg6 font:(id)arg7 color:(id)arg8 numberingSystem:(id)arg9 posterUUID:(id)arg10 galleryItem:(id)arg11;
- (id)inlineComplication;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPosterConfiguration:(id)arg1;
- (bool)isSelected;
- (id)landscapeComplications;
- (id)modeUUID;
- (id)numberingSystem;
- (id)posterUUID;

@end
