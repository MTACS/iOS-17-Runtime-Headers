
@interface DYMTLDerivedCounterSupport : NSObject {
    NSString * _analysisScript;
    NSMutableDictionary * _configurationVariables;
    NSMutableDictionary * _counterDictionary;
    NSString * _derivedCounterScript;
    NSString * _metalPluginName;
}

@property (nonatomic, readonly) NSString *analysisScript;
@property (nonatomic, readonly) NSMutableDictionary *configurationVariables;
@property (nonatomic, readonly) NSMutableDictionary *counterDictionary;
@property (nonatomic, readonly) NSString *derivedCounterScript;
@property (nonatomic, readonly) NSString *metalPluginName;

+ (void)mergeDictionaries:(id)arg1 right:(id)arg2;

- (void).cxx_destruct;
- (void)_addGPUTimeEntry;
- (void)_loadAnalysis:(id)arg1 vendorStringNames:(id)arg2 vendorScriptPrefix:(id)arg3;
- (bool)addAnalysisWithPrefix:(id)arg1 andScriptPrefix:(id)arg2;
- (id)analysisScript;
- (id)configurationVariables;
- (id)counterDictionary;
- (id)derivedCounterScript;
- (id)init;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (id)initWithMTLDevice:(id)arg1;
- (id)metalPluginName;

@end
