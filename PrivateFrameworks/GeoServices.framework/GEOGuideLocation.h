
@interface GEOGuideLocation : NSObject {
    NSString * _country;
    GEOPDGuideGroup * _guideGroup;
    GEOPDGuidesLocationEntry * _guideLocation;
    GEOPDEntity * _placeEntity;
    GEOPDGuidesLocationEntryTypeWorldWide * _worldwideGuideLocation;
}

@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) GEOMapItemIdentifier *guideLocationIdentifier;
@property (nonatomic, readonly) unsigned long long numberOfGuides;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;

+ (id)guideLocationsForEntries:(id)arg1 mapsResults:(id)arg2;

- (void).cxx_destruct;
- (id)country;
- (id)description;
- (id)guideLocationIdentifier;
- (id)initWithChildAction:(id)arg1;
- (id)initWithGuideLocation:(id)arg1;
- (id)initWithGuideLocation:(id)arg1 mapsResult:(id)arg2;
- (id)initWithWorldwideGuideLocation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfGuides;
- (id)pdLocationEntry;
- (id)pdWorldwideLocationEntry;
- (id)photosForType:(long long)arg1;
- (id)title;
- (long long)type;

@end
