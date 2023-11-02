
@interface SINetworkConfiguration : NSObject {
    NSString * _algorithmClassName;
    NSString * _algorithmOutputClassName;
    bool  _consumeDepth;
    NSString * _coreAnalyticEventName;
    int  _coreAnalyticTimeInterval;
    NSMutableSet * _disabledOutputBlobs;
    long long  _engineType;
    bool  _isReplay;
    NSString * _loggerPrefix;
    NSString * _networkMode;
    NSString * _networkName;
    NSString * _networkPath;
    bool  _runByE5RT;
    int  _signpostMappingID;
    bool  _supportZeroCopy;
}

@property (nonatomic, readonly) NSString *algorithmClassName;
@property (nonatomic, readonly) NSString *algorithmOutputClassName;
@property (nonatomic, readonly) bool consumeDepth;
@property (readonly) NSString *coreAnalyticEventName;
@property int coreAnalyticTimeInterval;
@property (retain) NSMutableSet *disabledOutputBlobs;
@property long long engineType;
@property bool isReplay;
@property (retain) NSString *loggerPrefix;
@property (readonly) NSString *networkMode;
@property (readonly) NSString *networkName;
@property (retain) NSString *networkPath;
@property bool runByE5RT;
@property (readonly) int signpostMappingID;
@property bool supportZeroCopy;

- (void).cxx_destruct;
- (id)algorithmClassName;
- (id)algorithmOutputClassName;
- (bool)consumeDepth;
- (id)coreAnalyticEventName;
- (int)coreAnalyticTimeInterval;
- (id)disabledOutputBlobs;
- (long long)engineType;
- (id)init;
- (id)initWithEventName:(id)arg1;
- (bool)isReplay;
- (id)loggerPrefix;
- (id)networkMode;
- (id)networkName;
- (id)networkPath;
- (bool)runByE5RT;
- (void)setCoreAnalyticTimeInterval:(int)arg1;
- (void)setDisabledOutputBlobs:(id)arg1;
- (void)setEngineType:(long long)arg1;
- (void)setIsReplay:(bool)arg1;
- (void)setLoggerPrefix:(id)arg1;
- (void)setNetworkMode:(id)arg1;
- (void)setNetworkName:(id)arg1;
- (void)setNetworkPath:(id)arg1;
- (void)setRunByE5RT:(bool)arg1;
- (void)setSupportZeroCopy:(bool)arg1;
- (int)signpostMappingID;
- (bool)supportZeroCopy;

@end
