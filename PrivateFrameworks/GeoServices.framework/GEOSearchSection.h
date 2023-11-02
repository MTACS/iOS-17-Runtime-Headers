
@interface GEOSearchSection : NSObject {
    NSString * _name;
    GEOSearchSectionGuide * _sectionGuide;
    GEOSearchSectionPlace * _sectionPlace;
    long long  _sectionType;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOSearchSectionGuide *sectionGuide;
@property (nonatomic, readonly) GEOSearchSectionPlace *sectionPlace;
@property (nonatomic, readonly) long long sectionType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 sectionType:(long long)arg2 sectionGuide:(id)arg3 sectionPlace:(id)arg4;
- (id)initWithSearchSection:(id)arg1 mapsResults:(id)arg2;
- (id)name;
- (id)sectionGuide;
- (id)sectionPlace;
- (long long)sectionType;

@end
