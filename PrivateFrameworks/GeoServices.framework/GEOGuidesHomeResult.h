
@interface GEOGuidesHomeResult : NSObject {
    NSArray * _mapsResults;
    GEOPDGuidesHomeResult * _pdGuideHomeResult;
}

@property (nonatomic, readonly) GEOGuidesHomeFixedSection *featuredGuidesSection;
@property (nonatomic, readonly) GEOGuidesHomeFixedSection *filteredGuidesSection;
@property (nonatomic, readonly) GEOGuidesHomeFixedSection *filtersSection;
@property (nonatomic, readonly) NSArray *repeatableSections;

- (void).cxx_destruct;
- (id)featuredGuidesSection;
- (id)filteredGuidesSection;
- (id)filtersSection;
- (id)guideLocationName:(id)arg1;
- (id)initWithGuidesHomeFixedSection:(id)arg1 mapsResults:(id)arg2;
- (id)repeatableSections;

@end
