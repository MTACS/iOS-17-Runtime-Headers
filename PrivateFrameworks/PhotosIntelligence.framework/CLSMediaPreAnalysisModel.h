
@interface CLSMediaPreAnalysisModel : NSObject <CLSSignalModel> {
    CLSSignalNode * _exposureNode;
    CLSSignalNode * _probableRotationDirection0DegreesConfidenceNode;
    CLSSignalNode * _probableRotationDirection180DegreesConfidenceNode;
    CLSSignalNode * _probableRotationDirection270DegreesConfidenceNode;
    CLSSignalNode * _probableRotationDirection90DegreesConfidenceNode;
    CLSSignalNode * _sharpnessNode;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *exposureNode;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *sharpnessNode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)exposureNode;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isWronglyRotatedFromMediaAnalysisProperties:(id)arg1;
- (void)setupVersion31;
- (void)setupVersion45;
- (void)setupVersion57;
- (id)sharpnessNode;
- (unsigned long long)version;

@end
