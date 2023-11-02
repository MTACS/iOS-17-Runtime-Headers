
@interface GEOPlaceRibbonConfiguration : NSObject {
    GEOPDPlaceRibbonConfiguration * _ribbonConfig;
    NSArray * _ribbonItems;
}

@property (nonatomic, readonly) NSArray *ribbonItems;

- (void).cxx_destruct;
- (void)_addAmenityEntryForRibbonItem:(id)arg1 toArray:(id)arg2;
- (void)_addFactoidEntriesForRibbonItem:(id)arg1 toArray:(id)arg2;
- (void)_addRegularRibbonEntryForType:(int)arg1 toArray:(id)arg2;
- (void)_buildRibbonItems;
- (id)initWithRibbonConfiguration:(id)arg1;
- (id)ribbonItems;

@end
