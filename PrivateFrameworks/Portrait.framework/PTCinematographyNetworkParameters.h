
@interface PTCinematographyNetworkParameters : NSObject {
    float  _expectedFPS;
    float  _forgetDetectionsAfterSeconds;
    NSArray * _inputSchemas;
    bool  _runOnlyWhenDetectorDidRun;
    NSSet * _supportedDetectionTypes;
    unsigned long long  _totalInputFloatCount;
}

@property float expectedFPS;
@property float forgetDetectionsAfterSeconds;
@property (retain) NSArray *inputSchemas;
@property bool runOnlyWhenDetectorDidRun;
@property (retain) NSSet *supportedDetectionTypes;
@property (readonly) unsigned long long totalInputFloatCount;

- (void).cxx_destruct;
- (id)_defaultSupportedDetectionTypes;
- (void)_processInputSchemaDicts:(id)arg1;
- (float)expectedFPS;
- (float)forgetDetectionsAfterSeconds;
- (id)initWithURL:(id)arg1;
- (id)inputSchemas;
- (bool)runOnlyWhenDetectorDidRun;
- (void)setExpectedFPS:(float)arg1;
- (void)setForgetDetectionsAfterSeconds:(float)arg1;
- (void)setInputSchemas:(id)arg1;
- (void)setRunOnlyWhenDetectorDidRun:(bool)arg1;
- (void)setSupportedDetectionTypes:(id)arg1;
- (id)supportedDetectionTypes;
- (unsigned long long)totalInputFloatCount;

@end
