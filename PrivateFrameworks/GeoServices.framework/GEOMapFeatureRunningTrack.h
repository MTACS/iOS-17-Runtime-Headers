
@interface GEOMapFeatureRunningTrack : NSObject {
    GEOMapRegion * _boundingBox;
    unsigned long long  _features;
    NSArray * _lanes;
    GEOMapRegion * _orientedBoundingRegion;
    unsigned long long  _trackId;
    unsigned long long  _type;
}

@property (nonatomic, readonly) GEOMapRegion *boundingBox;
@property (nonatomic, readonly) unsigned long long features;
@property (nonatomic, readonly) NSArray *lanes;
@property (nonatomic, readonly) GEOMapRegion *orientedBoundingRegion;
@property (nonatomic, readonly) unsigned char reliabilityScore;
@property (nonatomic, readonly) unsigned long long trackId;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)boundingBox;
- (id)description;
- (unsigned long long)features;
- (id)initWithVMP4Track:(const void*)arg1 boundingBox:(id)arg2;
- (id)lanes;
- (id)orientedBoundingRegion;
- (unsigned char)reliabilityScore;
- (unsigned long long)trackId;
- (unsigned long long)type;

@end
