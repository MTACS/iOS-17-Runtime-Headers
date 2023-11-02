
@interface DTKTraceTapLocalDelegate : NSObject <DTTapLocalDelegate> {
    NSMutableArray * _actionIDsByTriggerIndex;
    DTKTraceTapConfig * _config;
    NSArray * _localEventProducers;
    bool  _removeArchivingURLWhenComplete;
    DTKPSession * _session;
    bool  _stopWasCalled;
    DTTapLocal * _tap;
    NSMutableData * _triggerIDs;
    bool  _usesRawKtraceFile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_clampBufferSize:(unsigned long long)arg1;
- (id)_getSessionMetadata;
- (void)_sendStackshot;
- (unsigned long long)_triggerCount;
- (unsigned long long)bufferSizeForConfiguration:(id)arg1;
- (bool)canFetchWhileArchiving;
- (void)fetchDataForReason:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)initWithConfig:(id)arg1;
- (void)pause;
- (void)setTap:(id)arg1;
- (void)start;
- (void)stop;
- (void)unpause;
- (id)validateConfig;

@end
