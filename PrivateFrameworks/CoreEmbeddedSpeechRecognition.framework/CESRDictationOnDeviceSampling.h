
@interface CESRDictationOnDeviceSampling : NSObject {
    NSMutableDictionary * _dictationSamplingVariables;
    NSObject<OS_dispatch_queue> * _fileQueue;
    bool  _isDeviceSampledFromConfig;
    long long  _numberOfRequestsTillNow;
    NSDate * _samplingDate;
}

@property (nonatomic, retain) NSMutableDictionary *dictationSamplingVariables;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fileQueue;
@property (nonatomic) bool isDeviceSampledFromConfig;
@property (nonatomic) long long numberOfRequestsTillNow;
@property (nonatomic, retain) NSDate *samplingDate;

+ (bool)_isInternalInstall;
+ (bool)_isSamplingAllowed;
+ (id)_readDictationSampledPlist;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)_isSamplingDateCurrent;
- (void)_setRequestCount:(long long)arg1;
- (void)_setSamplingDateToCurrentDate;
- (void)_updateDictationSampledPlist;
- (id)dictationSamplingVariables;
- (id)fileQueue;
- (void)incrementSampledRequestCount;
- (id)init;
- (bool)isDeviceSampledFromConfig;
- (bool)isRequestSelectedForSamplingFromConfigForLanguage:(id)arg1;
- (long long)numberOfRequestsTillNow;
- (id)samplingDate;
- (void)setDictationSamplingVariables:(id)arg1;
- (void)setFileQueue:(id)arg1;
- (void)setIsDeviceSampledFromConfig:(bool)arg1;
- (void)setNumberOfRequestsTillNow:(long long)arg1;
- (void)setSamplingDate:(id)arg1;

@end
