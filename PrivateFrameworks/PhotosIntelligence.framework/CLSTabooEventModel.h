
@interface CLSTabooEventModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode * _bloodNode;
    CLSSignalNode * _demonstrationNode;
    CLSSignalNode * _destructionNode;
    CLSSignalNode * _fireDevastationNode;
    CLSSignalNode * _floodDevastationNode;
    CLSSignalNode * _funeralNode;
    CLSSignalNode * _hospitalNode;
    CLSSignalNode * _religiousSettingNode;
    CLSSignalNode * _vehicleCrashNode;
    unsigned long long  _version;
    CLSSignalNode * _warNode;
}

@property (readonly) CLSSignalNode *bloodNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CLSSignalNode *demonstrationNode;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *destructionNode;
@property (readonly) CLSSignalNode *fireDevastationNode;
@property (readonly) CLSSignalNode *floodDevastationNode;
@property (readonly) CLSSignalNode *funeralNode;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *hospitalNode;
@property (readonly) CLSSignalNode *religiousSettingNode;
@property (readonly) Class superclass;
@property (readonly) CLSSignalNode *vehicleCrashNode;
@property (readonly) unsigned long long version;
@property (readonly) CLSSignalNode *warNode;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)bloodNode;
- (id)demonstrationNode;
- (id)destructionNode;
- (id)fireDevastationNode;
- (id)floodDevastationNode;
- (id)funeralNode;
- (id)hospitalNode;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)modelInfo;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (id)religiousSettingNode;
- (void)setupVersion32;
- (void)setupVersion33;
- (void)setupVersion50_4;
- (void)setupVersion85;
- (id)vehicleCrashNode;
- (unsigned long long)version;
- (id)warNode;

@end
