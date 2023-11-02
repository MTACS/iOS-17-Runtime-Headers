
@interface DYExperiment : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowEarlyTermination;
    NSString * _captureArchivePath;
    bool  _enableExperimentFinish;
    bool  _enablePerFrameTiming;
    bool  _enabled;
    unsigned int  _frameTimeArraySize;
    unsigned int  _frameTimeVariationArraySize;
    double  _frameTimeVariationLimit1;
    double  _frameTimeVariationLimit2;
    double  _frameTimeVariationRangeMax;
    id /* block */  _messageHandler;
    NSString * _name;
    unsigned long long  _profilingFlags;
    unsigned int  _repeatCount;
    NSMutableDictionary * _results;
    int  _traceMode;
    bool  _usingModifiedArchive;
    unsigned int  _warmupCount;
}

@property (nonatomic) bool allowEarlyTermination;
@property (nonatomic, readonly, retain) NSString *captureArchivePath;
@property (nonatomic) bool enableExperimentFinish;
@property (nonatomic) bool enablePerFrameTiming;
@property (nonatomic) bool enabled;
@property (nonatomic) unsigned int frameTimeArraySize;
@property (nonatomic) unsigned int frameTimeVariationArraySize;
@property (nonatomic) double frameTimeVariationLimit1;
@property (nonatomic) double frameTimeVariationLimit2;
@property (nonatomic) double frameTimeVariationRangeMax;
@property (nonatomic, copy) id /* block */ messageHandler;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) unsigned long long profilingFlags;
@property (nonatomic) unsigned int repeatCount;
@property (nonatomic, readonly, retain) NSMutableDictionary *results;
@property (nonatomic) int traceMode;
@property (nonatomic) bool usingModifiedArchive;
@property (nonatomic) unsigned int warmupCount;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (bool)allowEarlyTermination;
- (id)captureArchivePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)enableExperimentFinish;
- (bool)enablePerFrameTiming;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)frameTimeArraySize;
- (unsigned int)frameTimeVariationArraySize;
- (double)frameTimeVariationLimit1;
- (double)frameTimeVariationLimit2;
- (double)frameTimeVariationRangeMax;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 results:(id)arg2;
- (bool)isPresentFrameEnabled;
- (id /* block */)messageHandler;
- (id)name;
- (unsigned long long)profilingFlags;
- (unsigned int)repeatCount;
- (id)results;
- (void)setAllowEarlyTermination:(bool)arg1;
- (void)setEnableExperimentFinish:(bool)arg1;
- (void)setEnablePerFrameTiming:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFrameTimeArraySize:(unsigned int)arg1;
- (void)setFrameTimeVariationArraySize:(unsigned int)arg1;
- (void)setFrameTimeVariationLimit1:(double)arg1;
- (void)setFrameTimeVariationLimit2:(double)arg1;
- (void)setFrameTimeVariationRangeMax:(double)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)setProfilingFlags:(unsigned long long)arg1;
- (void)setRepeatCount:(unsigned int)arg1;
- (void)setTraceMode:(int)arg1;
- (void)setUsingModifiedArchive:(bool)arg1;
- (void)setWarmupCount:(unsigned int)arg1;
- (int)traceMode;
- (bool)usingModifiedArchive;
- (unsigned int)warmupCount;

@end
