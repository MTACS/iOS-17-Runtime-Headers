
@protocol PBFPosterPreview <NSObject>

@required

- (NSString *)complicationLayoutType;
- (NSString *)displayNameLocalizationKey;
- (PRPosterFocusConfiguration *)focusConfiguration;
- (unsigned long long)galleryDisplayStyle;
- (NSString *)galleryLocalizedDescription;
- (NSString *)galleryLocalizedTitle;
- (PBFGalleryOptions *)galleryOptions;
- (PRPosterHomeScreenConfiguration *)homeScreenConfiguration;
- (<PBFPosterDescriptorLookupInfo> *)posterDescriptorLookupInfo;
- (unsigned long long)presentationStyle;
- (NSString *)previewUniqueIdentifier;
- (PRPosterRenderingConfiguration *)renderingConfiguration;
- (<PBFComplicationLookupInfo> *)subtitleComplication;
- (NSArray *)suggestedComplications;
- (NSArray *)suggestedLandscapeComplications;
- (PRPosterTitleStyleConfiguration *)titleStyleConfiguration;
- (NSString *)type;

@end
