
@interface MTLCaptureDescriptorInternal : MTLCaptureDescriptor {
    bool  _apiTriggeredCapture;
    unsigned long long  captureMode;
    id /* block */  completionHandler;
    bool  ignoreUnusedResources;
    bool  includeBacktrace;
    unsigned long long  sessionID;
    bool  suspendAfterCapture;
    bool  toolTriggeredCapture;
    unsigned long long  triggerHitsToEnd;
    unsigned long long  triggerHitsToStart;
}

@property (nonatomic) bool apiTriggeredCapture;
@property (nonatomic) unsigned long long captureMode;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) bool ignoreUnusedResources;
@property (nonatomic) bool includeBacktrace;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) bool suspendAfterCapture;
@property (nonatomic) bool toolTriggeredCapture;
@property (nonatomic) unsigned long long triggerHitsToEnd;
@property (nonatomic) unsigned long long triggerHitsToStart;

- (void).cxx_destruct;
- (bool)apiTriggeredCapture;
- (unsigned long long)captureMode;
- (id /* block */)completionHandler;
- (bool)ignoreUnusedResources;
- (bool)includeBacktrace;
- (id)init;
- (unsigned long long)sessionID;
- (void)setApiTriggeredCapture:(bool)arg1;
- (void)setCaptureMode:(unsigned long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setIgnoreUnusedResources:(bool)arg1;
- (void)setIncludeBacktrace:(bool)arg1;
- (void)setSessionID:(unsigned long long)arg1;
- (void)setSuspendAfterCapture:(bool)arg1;
- (void)setToolTriggeredCapture:(bool)arg1;
- (void)setTriggerHitsToEnd:(unsigned long long)arg1;
- (void)setTriggerHitsToStart:(unsigned long long)arg1;
- (bool)suspendAfterCapture;
- (bool)toolTriggeredCapture;
- (unsigned long long)triggerHitsToEnd;
- (unsigned long long)triggerHitsToStart;

@end
