
@interface GEOPlacecardLayoutConfiguration : NSObject {
    <GEOModuleConfigurationProvider> * _moduleConfigProvider;
    GEOPDPlacecardLayoutConfiguration * _placecardLayoutConfiguration;
}

@property (nonatomic, readonly) GEOModuleLayoutEntry *currentModuleLayoutEntry;

- (void).cxx_destruct;
- (id)currentModuleLayoutEntry;
- (id)initWithPlacecardLayoutConfiguration:(id)arg1 moduleConfigurationProvider:(id)arg2;

@end
