
@interface CLSSDModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode * _foodDrinkFoodieNode;
    CLSSignalNode * _foodDrinkNode;
    CLSSignalNode * _landscapeCityscapeNode;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *foodDrinkFoodieNode;
@property (readonly) CLSSignalNode *foodDrinkNode;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *landscapeCityscapeNode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)foodDrinkFoodieNode;
- (id)foodDrinkNode;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)landscapeCityscapeNode;
- (id)modelInfo;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (void)setupVersion33;
- (void)setupVersion51_4;
- (void)setupVersion85;
- (unsigned long long)version;

@end
