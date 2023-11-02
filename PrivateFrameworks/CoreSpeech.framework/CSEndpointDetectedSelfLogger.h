
@interface CSEndpointDetectedSelfLogger : NSObject <CSAttSiriEndpointerNodeDelegate, CSAttSiriRecognitionTaskCompletionReceiver, CSSiriClientBehaviorMonitorDelegate> {
    CSEndpointerMetrics * _cachedRelaxedEndpointerMetrics;
    CSAttSiriEndpointerNode * _endpointerNode;
    bool  _localSRDisabled;
    NSString * _mhId;
    NSObject<OS_dispatch_queue> * _queue;
    CSSiriClientBehaviorMonitor * _siriClientBehaviorMonitor;
    bool  _trpDetectDelivered;
}

@property (nonatomic, retain) CSEndpointerMetrics *cachedRelaxedEndpointerMetrics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=registerEndpointerNode:, nonatomic) CSAttSiriEndpointerNode *endpointerNode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool localSRDisabled;
@property (nonatomic, retain) NSString *mhId;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor;
@property (readonly) Class superclass;
@property (nonatomic) bool trpDetectDelivered;

+ (id)_decodeFeaturesAtEndpoint:(id)arg1 endpointerModelType:(long long)arg2;
+ (void)emitEndpointDetectedEventWithEndpointerMetrics:(id)arg1 withEndpointerModelType:(long long)arg2 withTrpId:(id)arg3 withMhID:(id)arg4;

- (void).cxx_destruct;
- (void)attSiriNode:(id)arg1 didDetectEndpointEventAtTime:(double)arg2 eventType:(long long)arg3 withMetrics:(id)arg4 useEndpointerSignal:(bool)arg5;
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(bool)arg4;
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;
- (void)attSiriNode:(id)arg1 selectedTRPId:(id)arg2 withMetrics:(id)arg3;
- (id)cachedRelaxedEndpointerMetrics;
- (void)didCompleteRecognitionTaskWithStatistics:(id)arg1 requestId:(id)arg2 endpointMode:(long long)arg3 error:(id)arg4;
- (id)endpointerNode;
- (id)init;
- (bool)localSRDisabled;
- (id)mhId;
- (id)queue;
- (void)registerEndpointerNode:(id)arg1;
- (void)reset;
- (void)setCachedRelaxedEndpointerMetrics:(id)arg1;
- (void)setLocalSRDisabled:(bool)arg1;
- (void)setMhId:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSiriClientBehaviorMonitor:(id)arg1;
- (void)setTrpDetectDelivered:(bool)arg1;
- (void)setup;
- (id)siriClientBehaviorMonitor;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;
- (bool)trpDetectDelivered;

@end
