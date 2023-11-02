
@interface CLSTrendsSceneModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode * _aircraftNode;
    CLSSignalNode * _airplaneNode;
    CLSSignalNode * _birdNode;
    CLSSignalNode * _flowerNode;
    CLSSignalNode * _forestNode;
    CLSSignalNode * _rainbowNode;
    CLSSignalNode * _skateboardingNode;
    CLSSignalNode * _skyscraperNode;
    CLSSignalNode * _snowNode;
    CLSSignalNode * _sunsetSunriseNode;
    unsigned long long  _version;
}

@property (readonly) CLSSignalNode *aircraftNode;
@property (readonly) CLSSignalNode *airplaneNode;
@property (readonly) CLSSignalNode *birdNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *flowerNode;
@property (readonly) CLSSignalNode *forestNode;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *rainbowNode;
@property (readonly) CLSSignalNode *skateboardingNode;
@property (readonly) CLSSignalNode *skyscraperNode;
@property (readonly) CLSSignalNode *snowNode;
@property (readonly) CLSSignalNode *sunsetSunriseNode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)aircraftNode;
- (id)airplaneNode;
- (id)birdNode;
- (id)flowerNode;
- (id)forestNode;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)modelInfo;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (id)rainbowNode;
- (void)setupVersion33;
- (void)setupVersion80;
- (void)setupVersion84;
- (id)skateboardingNode;
- (id)skyscraperNode;
- (id)snowNode;
- (id)sunsetSunriseNode;
- (unsigned long long)version;

@end
