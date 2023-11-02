
@interface GEOPlacecardLayoutData : NSObject <GEOModuleConfigurationProvider> {
    GEOPlacecardLayoutConfiguration * _placecardLayoutConfiguration;
    GEOPDPlacecardLayoutData * _placecardLayoutData;
}

@property (nonatomic, readonly) GEOModuleLayoutEntry *currentModuleLayoutEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentModuleLayoutEntry;
- (id)initWithPlacecardLayoutData:(id)arg1;
- (id)moduleConfigurationForIndex:(unsigned long long)arg1;

@end
