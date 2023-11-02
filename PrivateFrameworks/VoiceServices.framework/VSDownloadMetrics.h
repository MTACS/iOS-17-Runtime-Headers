
@interface VSDownloadMetrics : NSObject {
    NSString * _clientBundleIdentifier;
    bool  _discretionary;
    long long  _downloadBeginTimestamp;
    long long  _downloadEndTimestamp;
    float  _downloadProgress;
    NSNumber * _downloadSize;
    long long  _errorCode;
    bool  _isCellularAllowed;
    double  _setupTimeInterval;
    NSString * _voiceDownloadKey;
}

@property (copy) NSString *clientBundleIdentifier;
@property bool discretionary;
@property (readonly) long long downloadBeginTimestamp;
@property (readonly) long long downloadEndTimestamp;
@property float downloadProgress;
@property (copy) NSNumber *downloadSize;
@property long long errorCode;
@property bool isCellularAllowed;
@property double setupTimeInterval;
@property (readonly) NSString *voiceDownloadKey;

+ (double)_clockFactor;

- (void).cxx_destruct;
- (id)clientBundleIdentifier;
- (id)description;
- (id)dictionaryMetrics;
- (bool)discretionary;
- (long long)downloadBeginTimestamp;
- (double)downloadDuration;
- (long long)downloadEndTimestamp;
- (float)downloadProgress;
- (id)downloadSize;
- (bool)endMetrics;
- (long long)errorCode;
- (id)initWithVoiceName:(id)arg1 languageCode:(id)arg2 gender:(long long)arg3;
- (bool)isCellularAllowed;
- (void)setClientBundleIdentifier:(id)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setDownloadSize:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setIsCellularAllowed:(bool)arg1;
- (void)setSetupTimeInterval:(double)arg1;
- (double)setupTimeInterval;
- (id)voiceDownloadKey;

@end
