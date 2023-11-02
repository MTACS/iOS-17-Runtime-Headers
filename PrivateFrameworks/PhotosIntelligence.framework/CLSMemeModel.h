
@interface CLSMemeModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode * _documentNode;
    CLSSignalNode * _memeScreenshotEtcNode;
    CLSSignalNode * _negativeNode;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *documentNode;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *memeScreenshotEtcNode;
@property (readonly) CLSSignalNode *negativeNode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)documentNode;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isMemeExclusiveFromSceneClassifications:(id)arg1;
- (bool)isMemeFromSceneClassifications:(id)arg1;
- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)memeScreenshotEtcNode;
- (id)modelInfo;
- (id)negativeNode;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (void)setupVersion55;
- (void)setupVersion59;
- (void)setupVersion62;
- (unsigned long long)version;

@end
