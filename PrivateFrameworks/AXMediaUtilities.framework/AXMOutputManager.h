
@interface AXMOutputManager : NSObject <AXMTaskDispatcherDelegate> {
    AXMAudioSession * _audioSession;
    AXMOutputManagerConfiguration * _configuration;
    AXMTaskDispatcher * _outputRequests;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _queue_activeComponents;
    AXMHapticComponent * _queue_hapticComponent;
    AXMSoundComponent * _queue_soundComponent;
    AXMSpeechComponent * _queue_speechComponent;
    long long  _state;
    bool  _usesPrivateAudioSession;
}

@property (nonatomic, retain) AXMOutputManagerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (id)description;
- (void)disable;
- (id)dispatchRequest:(id)arg1;
- (void)dispatcher:(id)arg1 handleTask:(id)arg2;
- (void)enableWithCompletion:(id /* block */)arg1;
- (id)initWithComponents:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)interrupt:(id)arg1;
- (void)interruptImmediately;
- (void)interruptPolitely;
- (id)playActiveSound:(id)arg1;
- (void)playSound:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)speak:(id)arg1;

@end
