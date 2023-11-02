
@interface CLSSceneModel : CLSTaxonomyBasedModel <CLSClassificationBasedSignalModel> {
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (id)confidenceThresholdBySceneIdentifierForSceneNames:(id)arg1 withThresholdType:(unsigned long long)arg2;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)modelInfo;
- (bool)nodeIsSupported:(id)arg1;
- (bool)nodeRefIsSupported:(void*)arg1;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (unsigned long long)version;

@end
