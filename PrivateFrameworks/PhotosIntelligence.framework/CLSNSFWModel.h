
@interface CLSNSFWModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode * _brassiereNode;
    CLSSignalNode * _buttocksNode;
    CLSSignalNode * _explicitNode;
    CLSSignalNode * _femaleBreastNode;
    CLSSignalNode * _femaleGenitalsNode;
    CLSSignalNode * _generalNode;
    CLSSignalNode * _maleBreastNode;
    CLSSignalNode * _maleGenitalsNode;
    CLSSignalNode * _maleUnderwearNode;
    CLSSignalNode * _noneNode;
    CLSSignalNode * _underwearNode;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *generalNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)generalNode;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)modelInfo;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (void)setupVersion32;
- (void)setupVersion33;
- (void)setupVersion50_4;
- (unsigned long long)version;

@end
