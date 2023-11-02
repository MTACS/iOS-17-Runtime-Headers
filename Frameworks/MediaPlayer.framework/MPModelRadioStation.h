
@interface MPModelRadioStation : MPModelObject {
    NSString * _playbackAuthorizationToken;
}

@property (nonatomic) bool allowsItemLiking;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *attributionLabel;
@property (getter=isBeats1, nonatomic) bool beats1;
@property (getter=containsVideo, nonatomic) bool containsVideo;
@property (nonatomic, readonly) MPRadioStationEvent *currentStationEvent;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, copy) NSDate *endingAirDate;
@property (nonatomic) bool hasExplicitContent;
@property (getter=isLive, nonatomic) bool live;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *playbackAuthorizationToken;
@property (nonatomic, copy) NSString *providerBundleIdentifier;
@property (nonatomic, readonly) long long providerID;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, copy) NSURL *providerUniversalLink;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, copy) NSDate *startingAirDate;
@property (nonatomic, copy) NSArray *stationEvents;
@property (nonatomic, copy) id /* block */ stationGlyphBlock;
@property (getter=isSubscriptionRequired, nonatomic) bool subscriptionRequired;
@property (nonatomic) long long subtype;
@property (nonatomic) long long type;
@property (nonatomic, readonly) MPRadioStationEvent *upcomingStationEvent;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyRadioStationAllowsItemLiking__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationAttributionLabel__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationBeats1__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationContainsVideo__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEndingAirDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEvents__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationGlyph__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationHasExplicitContent__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationLive__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationName__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationProviderBundleIdentifier__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationProviderID__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationProviderName__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationProviderUniversalLink__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationShortEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationStartingAirDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationSubscriptionRequired__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationSubtype__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationType__MAPPING_MISSING__;
+ (id)__allowsItemLiking_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__attributionLabel_KEY;
+ (id)__beats1_KEY;
+ (id)__containsVideo_KEY;
+ (id)__editorNotes_KEY;
+ (id)__endingAirDate_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__live_KEY;
+ (id)__name_KEY;
+ (id)__providerBundleIdentifier_KEY;
+ (id)__providerID_KEY;
+ (id)__providerName_KEY;
+ (id)__providerUniversalLink_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__startingAirDate_KEY;
+ (id)__stationEvents_KEY;
+ (id)__stationGlyphBlock_KEY;
+ (id)__subscriptionRequired_KEY;
+ (id)__subtype_KEY;
+ (id)__type_KEY;
+ (id)classesForSecureCoding;
+ (long long)genericObjectType;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)contentItemCollectionInfo;
- (id)currentStationEvent;
- (id)humanDescription;
- (id)playbackAuthorizationToken;
- (void)setPlaybackAuthorizationToken:(id)arg1;
- (id)stationGlyph;
- (id)upcomingStationEvent;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredSectionPlaybackProperties;

- (id)msp_shortDescription;

@end
