
@interface GEOGuidesHomeFixedSection : NSObject {
    NSArray * _mapsResults;
    GEOPDGuidesHomeFixedSection * _pdFixedSection;
}

@property (nonatomic, readonly) NSArray *featuredGuides;
@property (nonatomic, readonly) NSArray *filteredGuideIds;
@property (nonatomic, readonly) NSArray *filteredGuides;
@property (nonatomic, readonly) NSArray *filters;
@property (nonatomic, readonly) long long sectionType;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)featuredGuides;
- (id)filteredGuideIds;
- (id)filteredGuides;
- (id)filters;
- (id)guideResultsFromMapResults;
- (id)initWithGuidesHomeFixedSection:(id)arg1 mapsResults:(id)arg2;
- (long long)sectionType;
- (id)title;

@end
