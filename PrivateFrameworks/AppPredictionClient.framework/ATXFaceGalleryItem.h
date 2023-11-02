
@interface ATXFaceGalleryItem : NSObject <ATXProtoBufWrapper, BMStoreData, NSCopying, NSSecureCoding> {
    bool  _blankTemplate;
    NSArray * _complications;
    NSString * _descriptiveTextLocalizationKey;
    NSString * _descriptorIdentifier;
    NSString * _displayNameLocalizationKey;
    NSString * _extensionBundleIdentifier;
    NSString * _identifier;
    bool  _isPreferredForGallery;
    NSArray * _landscapeComplications;
    long long  _layoutType;
    NSString * _localizedDisplayName;
    NSString * _localizedSubtitle;
    NSNumber * _modeSemanticType;
    NSString * _modeUUID;
    NSNumber * _score;
    bool  _shouldShowAsShuffleStack;
    long long  _source;
    NSString * _spokenNameLocalizationKey;
    ATXComplication * _subtitleComplication;
    BSColor * _titleColor;
    NSString * _titleFontName;
}

@property (getter=isBlankTemplate, nonatomic) bool blankTemplate;
@property (nonatomic, copy) NSArray *complications;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptiveTextLocalizationKey;
@property (nonatomic, copy) NSString *descriptorIdentifier;
@property (nonatomic, copy) NSString *displayNameLocalizationKey;
@property (nonatomic, copy) NSString *extensionBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isPreferredForGallery;
@property (nonatomic, readonly, copy) NSDictionary *jsonDictionary;
@property (nonatomic, copy) NSArray *landscapeComplications;
@property (nonatomic) long long layoutType;
@property (nonatomic, copy) NSString *localizedDisplayName;
@property (nonatomic, copy) NSString *localizedSubtitle;
@property (nonatomic, retain) NSNumber *modeSemanticType;
@property (nonatomic, copy) NSString *modeUUID;
@property (nonatomic, retain) NSNumber *score;
@property (nonatomic) bool shouldShowAsShuffleStack;
@property (nonatomic) long long source;
@property (nonatomic, copy) NSString *spokenNameLocalizationKey;
@property (nonatomic, copy) ATXComplication *subtitleComplication;
@property (readonly) Class superclass;
@property (nonatomic, copy) BSColor *titleColor;
@property (nonatomic, copy) NSString *titleFontName;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)itemFromJSONDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)complications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataVersion;
- (id)description;
- (id)descriptiveTextLocalizationKey;
- (id)descriptorIdentifier;
- (id)displayNameLocalizationKey;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 descriptorIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 localizedDisplayName:(id)arg4 modeSemanticType:(id)arg5 titleFontName:(id)arg6 titleColor:(id)arg7 subtitleComplication:(id)arg8 layoutType:(long long)arg9 complications:(id)arg10;
- (id)initWithIdentifier:(id)arg1 descriptorIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 localizedDisplayName:(id)arg4 modeSemanticType:(id)arg5 titleFontName:(id)arg6 titleColor:(id)arg7 subtitleComplication:(id)arg8 layoutType:(long long)arg9 complications:(id)arg10 landscapeComplications:(id)arg11;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isBlankTemplate;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXFaceGalleryItem:(id)arg1;
- (bool)isPreferredForGallery;
- (id)json;
- (id)jsonDictionary;
- (id)landscapeComplications;
- (long long)layoutType;
- (id)localizedDisplayName;
- (id)localizedSubtitle;
- (id)modeSemanticType;
- (id)modeUUID;
- (id)proto;
- (id)score;
- (id)serialize;
- (void)setBlankTemplate:(bool)arg1;
- (void)setComplications:(id)arg1;
- (void)setDescriptiveTextLocalizationKey:(id)arg1;
- (void)setDescriptorIdentifier:(id)arg1;
- (void)setDisplayNameLocalizationKey:(id)arg1;
- (void)setExtensionBundleIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsPreferredForGallery:(bool)arg1;
- (void)setLandscapeComplications:(id)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setModeSemanticType:(id)arg1;
- (void)setModeUUID:(id)arg1;
- (void)setScore:(id)arg1;
- (void)setShouldShowAsShuffleStack:(bool)arg1;
- (void)setSource:(long long)arg1;
- (void)setSpokenNameLocalizationKey:(id)arg1;
- (void)setSubtitleComplication:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFontName:(id)arg1;
- (bool)shouldShowAsShuffleStack;
- (long long)source;
- (id)spokenNameLocalizationKey;
- (id)subtitleComplication;
- (id)titleColor;
- (id)titleFontName;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)initWithPosterBoardRepresentation:(id)arg1;
- (id)posterBoardRepresentation;

@end
