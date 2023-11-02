
@interface ERAttentionAwarenessClient : NSObject {
    AWAttentionAwarenessClient * _attentionAwarenessClient;
    AWAttentionAwarenessConfiguration * _attentionAwarenessConfiguration;
    id /* block */  _interruptHandler;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _tooCloseDistanceThreshold;
}

@property (nonatomic, retain) AWAttentionAwarenessClient *attentionAwarenessClient;
@property (nonatomic, retain) AWAttentionAwarenessConfiguration *attentionAwarenessConfiguration;
@property (nonatomic, copy) id /* block */ interruptHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long tooCloseDistanceThreshold;

+ (long long)_categoryForDistance:(float)arg1 withFaceState:(unsigned long long)arg2;
+ (long long)_categoryForDistance:(float)arg1 withTooCloseDistanceThreshold:(long long)arg2 withFaceState:(unsigned long long)arg3;
+ (void)reportAnalyticsFaceDetectAttentionEvent:(id)arg1;

- (void).cxx_destruct;
- (void)_pollForDistanceWithCompletion:(id /* block */)arg1;
- (void)_resumeStreamingWithCompletion:(id /* block */)arg1;
- (id)attentionAwarenessClient;
- (id)attentionAwarenessConfiguration;
- (bool)cancelWithError:(id*)arg1;
- (id)init;
- (id /* block */)interruptHandler;
- (bool)invalidateWithError:(id*)arg1;
- (void)pollWithCompletion:(id /* block */)arg1;
- (id)queue;
- (void)setAttentionAwarenessClient:(id)arg1;
- (void)setAttentionAwarenessConfiguration:(id)arg1;
- (void)setInterruptHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setTooCloseDistanceThreshold:(long long)arg1;
- (long long)tooCloseDistanceThreshold;

@end
