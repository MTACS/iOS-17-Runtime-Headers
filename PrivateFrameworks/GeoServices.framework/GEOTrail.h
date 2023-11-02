
@interface GEOTrail : NSObject {
    NSString * _categoryName;
    NSArray * _factoids;
    NSString * _name;
    <GEOMapItemPhoto> * _photo;
    bool  _shouldHighlight;
    GEOFeatureStyleAttributes * _styleAttributes;
    unsigned long long  _trailId;
    GEOMapItemIdentifier * _trailIdentifier;
}

@property (nonatomic, readonly) GEOFactoid *_mapsui_hikingDifficultyFactoid;
@property (nonatomic, readonly) NSString *categoryName;
@property (nonatomic, readonly) NSArray *factoids;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) <GEOMapItemPhoto> *photo;
@property (nonatomic, readonly) bool shouldHighlight;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, readonly) unsigned long long trailId;
@property (nonatomic, readonly) GEOMapItemIdentifier *trailIdentifier;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)factoidsFromFactoidData:(id)arg1;

- (void).cxx_destruct;
- (id)categoryName;
- (id)factoids;
- (id)initWithTrail:(id)arg1;
- (id)name;
- (id)photo;
- (bool)shouldHighlight;
- (id)styleAttributes;
- (unsigned long long)trailId;
- (id)trailIdentifier;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (id)_mapsui_createCombinedTrailTypeAndLengthFactoid;
- (id)_mapsui_hikingDifficultyFactoid;
- (id)factoidWithSemantic:(int)arg1;

@end
