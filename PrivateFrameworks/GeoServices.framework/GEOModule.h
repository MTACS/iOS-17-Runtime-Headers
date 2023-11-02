
@interface GEOModule : NSObject {
    GEOPDModule * _module;
    <GEOModuleConfigurationProvider> * _moduleConfigProvider;
}

@property (nonatomic, readonly) GEOModuleConfiguration *configuration;
@property (nonatomic, readonly) int configurationExpectation;
@property (nonatomic, readonly) bool hasConfiguration;
@property (nonatomic, readonly) bool isExpectedToHaveConfiguration;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)configuration;
- (int)configurationExpectation;
- (id)description;
- (bool)hasConfiguration;
- (id)initWithModule:(id)arg1 moduleConfigProvider:(id)arg2;
- (bool)isExpectedToHaveConfiguration;
- (int)type;

@end
