
@interface GTCaptureDescriptor : GTCaptureRequest <NSSecureCoding> {
    bool  _ignoreUnusedResources;
    bool  _includeBacktrace;
    bool  _isToolsCapture;
    NSURL * _outputURL;
    unsigned long long  _sessionID;
    unsigned long long  _streamRef;
    bool  _suspendAfterCapture;
    unsigned long long  _triggerHitsToEnd;
    unsigned long long  _triggerHitsToStart;
}

@property (nonatomic) bool ignoreUnusedResources;
@property (nonatomic) bool includeBacktrace;
@property (nonatomic) bool isToolsCapture;
@property (nonatomic, retain) NSURL *outputURL;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) bool suspendAfterCapture;
@property (nonatomic) unsigned long long triggerHitsToEnd;
@property (nonatomic) unsigned long long triggerHitsToStart;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoreUnusedResources;
- (bool)includeBacktrace;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestID:(unsigned long long)arg1;
- (bool)isToolsCapture;
- (id)outputURL;
- (unsigned long long)sessionID;
- (void)setIgnoreUnusedResources:(bool)arg1;
- (void)setIncludeBacktrace:(bool)arg1;
- (void)setIsToolsCapture:(bool)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setSessionID:(unsigned long long)arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (void)setSuspendAfterCapture:(bool)arg1;
- (void)setTriggerHitsToEnd:(unsigned long long)arg1;
- (void)setTriggerHitsToStart:(unsigned long long)arg1;
- (unsigned long long)streamRef;
- (bool)suspendAfterCapture;
- (unsigned long long)triggerHitsToEnd;
- (unsigned long long)triggerHitsToStart;

@end
