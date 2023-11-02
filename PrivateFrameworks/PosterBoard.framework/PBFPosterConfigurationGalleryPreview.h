
@interface PBFPosterConfigurationGalleryPreview : NSObject <PBFPosterPreview> {
    NSString * _complicationLayoutType;
    PRPosterConfiguration * _configuration;
    NSString * _displayNameLocalizationKey;
    PRPosterFocusConfiguration * _focusConfiguration;
    unsigned long long  _galleryDisplayStyle;
    NSString * _galleryLocalizedDescription;
    NSString * _galleryLocalizedTitle;
    PBFGalleryOptions * _galleryOptions;
    PRPosterHomeScreenConfiguration * _homeScreenConfiguration;
    <PBFPosterDescriptorLookupInfo> * _posterDescriptorLookupInfo;
    unsigned long long  _presentationStyle;
    NSString * _previewUniqueIdentifier;
    PRPosterRenderingConfiguration * _renderingConfiguration;
    <PBFComplicationLookupInfo> * _subtitleComplication;
    NSArray * _suggestedComplications;
    NSArray * _suggestedLandscapeComplications;
    PRPosterTitleStyleConfiguration * _titleStyleConfiguration;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSString *complicationLayoutType;
@property (nonatomic, readonly) PRPosterConfiguration *configuration;
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

- (void).cxx_destruct;
- (id)complicationLayoutType;
- (id)configuration;
- (id)displayNameLocalizationKey;
- (id)focusConfiguration;
- (unsigned long long)galleryDisplayStyle;
- (id)galleryLocalizedDescription;
- (id)galleryLocalizedTitle;
- (id)galleryOptions;
- (id)homeScreenConfiguration;
- (id)initWithConfiguration:(id)arg1 extension:(id)arg2;
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
