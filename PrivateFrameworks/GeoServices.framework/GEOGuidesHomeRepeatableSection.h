
@interface GEOGuidesHomeRepeatableSection : NSObject {
    NSArray * _mapsResults;
    GEOPDGuidesHomeRepeatableSection * _pdRepeatableSection;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) NSArray *curatedGuides;
@property (nonatomic, readonly) NSArray *guideLocations;
@property (nonatomic, readonly) NSArray *publishers;
@property (nonatomic, readonly) long long sectionType;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (long long)contentType;
- (id)curatedGuides;
- (id)guideLocations;
- (id)initWithGuidesHomeRepeatableSection:(id)arg1 mapsResults:(id)arg2;
- (id)publishers;
- (long long)sectionType;
- (id)title;

@end
