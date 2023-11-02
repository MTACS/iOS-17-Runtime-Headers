
@interface CLSPotentialLandmarkModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode * _landmarkNode;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *landmarkNode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)landmarkNode;
- (id)modelInfo;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (void)setupVersion32;
- (void)setupVersion33;
- (unsigned long long)version;

@end
