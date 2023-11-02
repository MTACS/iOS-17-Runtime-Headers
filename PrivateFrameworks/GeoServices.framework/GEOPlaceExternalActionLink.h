
@interface GEOPlaceExternalActionLink : NSObject {
    GEOPDLink * _actionLink;
    NSMapTable * _attributionMap;
}

@property (nonatomic, readonly) GEOPlaceExternalActionLinkAppClipParams *appClipParams;
@property (nonatomic, readonly) GEOQuickLink *appClipRepresentedAsQuickLink;
@property (nonatomic, readonly) GEOAttributionApp *attributionAppForMapsExtension;
@property (nonatomic, readonly) GEOQuickLink *quickLink;
@property (nonatomic, readonly) GEOPlaceExternalActionLinkQuickLinkParams *quickLinkParams;
@property (nonatomic, readonly) GEOPlaceExternalActionLinkExtensionParams *siriExtensionParams;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)appClipParams;
- (id)appClipRepresentedAsQuickLink;
- (id)appClipUsingArtworkURL:(id)arg1 title:(id)arg2;
- (id)attributionAppForMapsExtension;
- (id)initWithLinkData:(id)arg1 attributionMap:(id)arg2;
- (id)quickLink;
- (id)quickLinkParams;
- (id)siriExtensionParams;
- (int)type;

@end
