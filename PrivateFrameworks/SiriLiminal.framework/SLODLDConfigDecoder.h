
@interface SLODLDConfigDecoder : NSObject {
    NSDictionary * _dictionary;
    NSString * _resourcePath;
}

@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, retain) NSString *resourcePath;

- (void).cxx_destruct;
- (id)_getValueForKey:(id)arg1 categoryKey:(id)arg2;
- (id)dictionary;
- (id)getBertModelFile;
- (id)getBertModelOutputNodes;
- (id)getConfigVersion;
- (unsigned long long)getInputType;
- (id)getOutputSpecs;
- (unsigned long long)getPreProcessorType;
- (id)getRegexMapConfig;
- (id)getSPMEncoderOptions;
- (id)getSPMModelFile;
- (unsigned long long)getTokenizerType;
- (id)initWithConfigFile:(id)arg1;
- (bool)isSPMModelMmapable;
- (id)resourcePath;
- (void)setDictionary:(id)arg1;
- (void)setResourcePath:(id)arg1;

@end
