
@interface PBFGenericPosterPreview : NSObject <NSCopying, PBFPosterPreview> {
    unsigned long long  _cachedDisplayStyle;
    unsigned long long  _cachedGalleryPresentationStyle;
    NSString * _complicationLayoutType;
    NSString * _displayNameLocalizationKey;
    PRPosterFocusConfiguration * _focusConfiguration;
    NSString * _galleryLocalizedDescription;
    NSString * _galleryLocalizedTitle;
    PBFGalleryOptions * _galleryOptions;
    unsigned long long  _hash;
    PRPosterHomeScreenConfiguration * _homeScreenConfiguration;
    <PBFPosterDescriptorLookupInfo> * _posterDescriptorLookupInfo;
    NSString * _previewUniqueIdentifier;
    PRPosterRenderingConfiguration * _renderingConfiguration;
    <PBFComplicationLookupInfo> * _subtitleComplication;
    NSArray * _suggestedComplications;
    NSArray * _suggestedLandscapeComplications;
    PRPosterTitleStyleConfiguration * _titleStyleConfiguration;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSString *complicationLayoutType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayNameLocalizationKey;
@property (nonatomic, readonly, copy) PRPosterFocusConfiguration *focusConfiguration;
@property (nonatomic, readonly) unsigned long long galleryDisplayStyle;
@property (nonatomic, readonly, copy) NSString *galleryLocalizedDescription;
@property (nonatomic, readonly, copy) NSString *galleryLocalizedTitle;
@property (nonatomic, readonly, copy) PBFGalleryOptions *galleryOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (nonatomic, readonly, copy) <PBFPosterDescriptorLookupInfo> *posterDescriptorLookupInfo;
@property (nonatomic, readonly) unsigned long long presentationStyle;
@property (nonatomic, readonly, copy) NSString *previewUniqueIdentifier;
@property (nonatomic, readonly, copy) PRPosterRenderingConfiguration *renderingConfiguration;
@property (nonatomic, readonly, copy) <PBFComplicationLookupInfo> *subtitleComplication;
@property (nonatomic, readonly, copy) NSArray *suggestedComplications;
@property (nonatomic, readonly, copy) NSArray *suggestedLandscapeComplications;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) PRPosterTitleStyleConfiguration *titleStyleConfiguration;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)posterPreviewWithUniqueIdentifier:(id)arg1 displayNameLocalizationKey:(id)arg2 galleryLocalizedTitle:(id)arg3 galleryLocalizedDescription:(id)arg4 posterDescriptorLookupInfo:(id)arg5 titleStyleConfiguration:(id)arg6 focusConfiguration:(id)arg7 subtitleComplication:(id)arg8 suggestedComplications:(id)arg9 suggestedLandscapeComplications:(id)arg10 complicationLayoutType:(id)arg11 renderingConfiguration:(id)arg12 homeScreenConfiguration:(id)arg13 previewType:(id)arg14 galleryOptions:(id)arg15;
+ (id)testPosterPreviewWithLocalizedTitle:(id)arg1 description:(id)arg2;

- (void).cxx_destruct;
- (void)_hydrateGalleryOptions;
- (id)complicationLayoutType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayNameLocalizationKey;
- (id)focusConfiguration;
- (unsigned long long)galleryDisplayStyle;
- (id)galleryLocalizedDescription;
- (id)galleryLocalizedTitle;
- (id)galleryOptions;
- (unsigned long long)hash;
- (id)homeScreenConfiguration;
- (bool)isEqual:(id)arg1;
- (id)posterDescriptorLookupInfo;
- (unsigned long long)presentationStyle;
- (id)previewUniqueIdentifier;
- (id)renderingConfiguration;
- (id)subtitleComplication;
- (id)suggestedComplications;
- (id)suggestedLandscapeComplications;
- (id)titleStyleConfiguration;
- (id)type;

@end
