
@interface HMIVideoAnalyzerState : HMFObject <HMFLogging> {
    double  _analysisFPS;
    double  _averageAnalysisTime;
    double  _bufferFillRatio;
    unsigned long long  _bufferSize;
    HMIVideoAnalyzerConfiguration * _configuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentPTS;
    double  _delay;
    HMIVideoAnalyzerDynamicConfiguration * _dynamicConfiguration;
    bool  _encode;
    bool  _encoder;
    NSUUID * _identifier;
    bool  _monitored;
    unsigned long long  _numDecodedSamples;
    unsigned long long  _numDidAnalyzeFragments;
    unsigned long long  _numDidAnalyzeFrames;
    unsigned long long  _numDidAnalyzePackages;
    unsigned long long  _numDidCreateTimelapseFragments;
    double  _timeSinceAnalyzerStarted;
    double  _timeSinceLastFragmentWasReceived;
}

@property (readonly) NSDictionary *JSONObject;
@property (readonly) double analysisFPS;
@property (readonly) double averageAnalysisTime;
@property (readonly) double bufferFillRatio;
@property (readonly) unsigned long long bufferSize;
@property (readonly) HMIVideoAnalyzerConfiguration *configuration;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentPTS;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) double delay;
@property (readonly, copy) NSString *description;
@property (readonly) HMIVideoAnalyzerDynamicConfiguration *dynamicConfiguration;
@property (readonly) bool encode;
@property (readonly) bool encoder;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) bool monitored;
@property (readonly) unsigned long long numDecodedSamples;
@property (readonly) unsigned long long numDidAnalyzeFragments;
@property (readonly) unsigned long long numDidAnalyzeFrames;
@property (readonly) unsigned long long numDidAnalyzePackages;
@property (readonly) unsigned long long numDidCreateTimelapseFragments;
@property (readonly) Class superclass;
@property (readonly) NSArray *tableColumns;
@property (readonly) NSArray *tableValues;
@property (readonly) double timeSinceAnalyzerStarted;
@property (readonly) double timeSinceLastFragmentWasReceived;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)JSONObject;
- (double)analysisFPS;
- (double)averageAnalysisTime;
- (double)bufferFillRatio;
- (unsigned long long)bufferSize;
- (void)check;
- (id)configuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentPTS;
- (double)delay;
- (id)dynamicConfiguration;
- (bool)encode;
- (bool)encoder;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1 dynamicConfiguration:(id)arg2 identifier:(id)arg3 monitored:(bool)arg4 analysisFPS:(double)arg5 timeSinceAnalyzerStarted:(double)arg6 timeSinceLastFragmentWasReceived:(double)arg7 bufferFillRatio:(double)arg8 bufferSize:(unsigned long long)arg9 delay:(double)arg10 currentPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg11 numDecodedSamples:(unsigned long long)arg12 numDidAnalyzeFrames:(unsigned long long)arg13 numDidAnalyzeFragments:(unsigned long long)arg14 numDidAnalyzePackages:(unsigned long long)arg15 numDidCreateTimelapseFragments:(unsigned long long)arg16 averageAnalysisTime:(double)arg17 encode:(bool)arg18 encoder:(bool)arg19;
- (bool)monitored;
- (unsigned long long)numDecodedSamples;
- (unsigned long long)numDidAnalyzeFragments;
- (unsigned long long)numDidAnalyzeFrames;
- (unsigned long long)numDidAnalyzePackages;
- (unsigned long long)numDidCreateTimelapseFragments;
- (id)tableColumns;
- (id)tableValues;
- (double)timeSinceAnalyzerStarted;
- (double)timeSinceLastFragmentWasReceived;

@end
