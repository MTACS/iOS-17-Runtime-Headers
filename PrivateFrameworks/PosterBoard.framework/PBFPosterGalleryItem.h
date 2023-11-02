
@interface PBFPosterGalleryItem : NSObject <NSCopying, NSSecureCoding> {
    bool  _blankTemplate;
    NSArray * _complications;
    NSString * _descriptiveTextLocalizationKey;
    NSString * _descriptorIdentifier;
    NSString * _displayNameLocalizationKey;
    NSString * _extensionBundleIdentifier;
    NSString * _identifier;
    NSArray * _landscapeComplications;
    long long  _layoutType;
    NSString * _localizedDisplayName;
    NSString * _localizedSubtitle;
    NSNumber * _modeSemanticType;
    NSString * _modeUUID;
    bool  _shouldShowAsShuffleStack;
    long long  _source;
    NSString * _spokenNameLocalizationKey;
    PBFPosterGallerySuggestedComplication * _subtitleComplication;
    BSColor * _titleColor;
    NSString * _titleFontName;
}

@property (getter=isBlankTemplate, nonatomic, readonly) bool blankTemplate;
@property (nonatomic, readonly, copy) NSArray *complications;
@property (nonatomic, readonly, copy) NSString *descriptiveTextLocalizationKey;
@property (nonatomic, readonly, copy) NSString *descriptorIdentifier;
@property (nonatomic, readonly, copy) NSString *displayNameLocalizationKey;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *landscapeComplications;
@property (nonatomic, readonly) long long layoutType;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly, copy) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSNumber *modeSemanticType;
@property (nonatomic, readonly, copy) NSString *modeUUID;
@property (nonatomic, readonly) bool shouldShowAsShuffleStack;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly, copy) NSString *spokenNameLocalizationKey;
@property (nonatomic, readonly, copy) PBFPosterGallerySuggestedComplication *subtitleComplication;
@property (nonatomic, readonly, copy) BSColor *titleColor;
@property (nonatomic, readonly, copy) NSString *titleFontName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)complications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptiveTextLocalizationKey;
- (id)descriptorIdentifier;
- (id)displayNameLocalizationKey;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 descriptorIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 displayNameLocalizationKey:(id)arg4 spokenNameLocalizationKey:(id)arg5 descriptiveTextLocalizationKey:(id)arg6 localizedDisplayName:(id)arg7 localizedSubtitle:(id)arg8 titleFontName:(id)arg9 titleColor:(id)arg10 subtitleComplication:(id)arg11 layoutType:(long long)arg12 modeSemanticType:(id)arg13 modeUUID:(id)arg14 complications:(id)arg15 landscapeComplications:(id)arg16 blankTemplate:(bool)arg17 shouldShowAsShuffleStack:(bool)arg18 source:(long long)arg19;
- (id)initWithProactiveRepresentation:(id)arg1;
- (bool)isBlankTemplate;
- (bool)isEqual:(id)arg1;
- (id)landscapeComplications;
- (long long)layoutType;
- (id)localizedDisplayName;
- (id)localizedSubtitle;
- (id)modeSemanticType;
- (id)modeUUID;
- (id)proactiveRepresentation;
- (bool)shouldShowAsShuffleStack;
- (long long)source;
- (id)spokenNameLocalizationKey;
- (id)subtitleComplication;
- (id)titleColor;
- (id)titleFontName;

@end
