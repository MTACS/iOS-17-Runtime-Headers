
@interface GEOPlaceTemplate : NSObject <MUPlaceTileViewModel> {
    NSMapTable * _attributionMap;
    bool  _hasRichData;
    GEOPDTemplateData * _templateData;
    NSTimeZone * _timeZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long expectedNumberOfFooterLines;
@property (nonatomic, readonly) GEOPlaceLineTemplate *footerLine;
@property (nonatomic, readonly) bool hasRichData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOMapItemPhoto> *heroImage;
@property (nonatomic, readonly) GEOMapItemIdentifier *mapItemIdentifier;
@property (nonatomic, readonly) NSString *placeName;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, readonly) GEOPlaceLineTemplate *subtitleLine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAreaHighlight;
@property (nonatomic, readonly) NSString *tileName;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void).cxx_destruct;
- (id)footerLine;
- (bool)hasRichData;
- (id)heroImage;
- (id)initWithIdentifier:(id)arg1 supportsAreaHighlight:(bool)arg2;
- (id)initWithPlaceTemplate:(id)arg1 attributionMap:(id)arg2;
- (id)mapItemIdentifier;
- (id)placeName;
- (id)styleAttributes;
- (id)subtitleLine;
- (bool)supportsAreaHighlight;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (unsigned long long)expectedNumberOfFooterLines;
- (void)fetchBadgeIconWithCompletion:(id /* block */)arg1;
- (void)fetchFallbackIconWithCompletion:(id /* block */)arg1;
- (void)fetchImageTilewWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)footerAttributedStringForFont:(id)arg1;
- (id)subtitleAttributedStringForFont:(id)arg1;
- (id)tileName;

@end
