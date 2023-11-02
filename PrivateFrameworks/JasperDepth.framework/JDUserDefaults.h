
@interface JDUserDefaults : NSObject {
    NSUserDefaults * _defaults;
    NSString * _dumpFrameConfigsPath;
    NSString * _dumpPointCloudsPath;
    NSString * _dumpRawFramesPath;
    NSString * _dumpWarperMeshesPath;
    unsigned int  _gmoFlowBits;
    int  _hybridOverride;
    bool  _ignoreWarperMesh;
    float  _reflectivityFilterThreshold;
    bool  _replayFirstFrame;
}

@property (readonly) NSString *dumpFrameConfigsPath;
@property (readonly) NSString *dumpPointCloudsPath;
@property (readonly) NSString *dumpRawFramesPath;
@property (readonly) NSString *dumpWarperMeshesPath;
@property (readonly) unsigned int gmoFlowBits;
@property (readonly) int hybridOverride;
@property (readonly) bool ignoreWarperMesh;
@property (readonly) float reflectivityFilterThreshold;
@property (readonly) bool replayFirstFrame;

+ (id)defaults;

- (void).cxx_destruct;
- (id)dumpFrameConfigsPath;
- (id)dumpPointCloudsPath;
- (id)dumpRawFramesPath;
- (id)dumpWarperMeshesPath;
- (id)getObjectForKey:(id)arg1 from:(id)arg2 withDefaultValue:(id)arg3;
- (unsigned int)gmoFlowBits;
- (int)hybridOverride;
- (bool)ignoreWarperMesh;
- (id)init;
- (float)reflectivityFilterThreshold;
- (bool)replayFirstFrame;

@end
