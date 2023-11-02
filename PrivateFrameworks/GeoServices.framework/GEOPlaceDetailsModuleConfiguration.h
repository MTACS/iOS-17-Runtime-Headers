
@interface GEOPlaceDetailsModuleConfiguration : NSObject {
    GEOPDPlaceInfosModuleConfiguration * _placeInfosModuleConfig;
}

@property (nonatomic, readonly) int attributionStyle;
@property (nonatomic, readonly) NSArray *factoidReferences;
@property (nonatomic, readonly) int locationStyle;

- (void).cxx_destruct;
- (int)attributionStyle;
- (id)factoidReferences;
- (id)initWithPlaceInfoModuleConfiguration:(id)arg1;
- (int)locationStyle;

@end
