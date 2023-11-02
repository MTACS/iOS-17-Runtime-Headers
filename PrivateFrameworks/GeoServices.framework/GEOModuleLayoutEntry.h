
@interface GEOModuleLayoutEntry : NSObject {
    <GEOModuleConfigurationProvider> * _moduleConfigProvider;
    GEOPDModuleLayoutEntry * _moduleLayoutEntry;
}

@property (nonatomic, readonly) NSString *debugName;
@property (nonatomic, readonly) NSArray *modules;

+ (id)moduleLayoutEntryFromArray:(id)arg1;

- (void).cxx_destruct;
- (void)_performPostCheckForModules:(id)arg1;
- (id)debugName;
- (id)description;
- (id)initWithModuleLayoutEntry:(id)arg1 moduleConfigProvider:(id)arg2;
- (id)modules;

@end
