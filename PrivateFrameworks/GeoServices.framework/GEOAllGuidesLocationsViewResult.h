
@interface GEOAllGuidesLocationsViewResult : NSObject {
    NSArray * _mapsResults;
    GEOPDAllGuidesLocationsViewResult * _viewResult;
}

@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)initWithAllGuidesLocationsViewResult:(id)arg1 mapsResults:(id)arg2;
- (id)sections;
- (id)title;

@end
