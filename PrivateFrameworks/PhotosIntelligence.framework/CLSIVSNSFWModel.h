
@interface CLSIVSNSFWModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode * _anyNode;
    CLSSignalNode * _buttocksNode;
    CLSSignalNode * _explicitNode;
    CLSSignalNode * _femaleBreastNode;
    CLSSignalNode * _femaleGenitalsNode;
    CLSSignalNode * _maleBreastNode;
    CLSSignalNode * _maleGenitalsNode;
    CLSSignalNode * _noneNode;
    CLSSignalNode * _underwearNode;
    unsigned long long  _version;
}

@property (readonly) CLSSignalNode *anyNode;
@property (readonly) CLSSignalNode *buttocksNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *explicitNode;
@property (readonly) CLSSignalNode *femaleBreastNode;
@property (readonly) CLSSignalNode *femaleGenitalsNode;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *maleBreastNode;
@property (readonly) CLSSignalNode *maleGenitalsNode;
@property (readonly) CLSSignalNode *noneNode;
@property (readonly) Class superclass;
@property (readonly) CLSSignalNode *underwearNode;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)anyNode;
- (id)buttocksNode;
- (id)explicitNode;
- (id)femaleBreastNode;
- (id)femaleGenitalsNode;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)maleBreastNode;
- (id)maleGenitalsNode;
- (id)modelInfo;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (id)noneNode;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (void)setupVersion61;
- (void)setupVersion76;
- (void)setupVersion95;
- (void)setupVersion98;
- (id)underwearNode;
- (unsigned long long)version;

@end
