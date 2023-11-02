
@interface AVFoundationUnitTestSession : NSObject <AVFoundationUnitTestStreamerCreating> {
    struct { 
        bool AWAttentionStreamerActivateEyeRelief; 
        bool AWAttentionStreamerActivateAttentionDetection; 
    }  _currentOptions;
    <AVFoundationUnitTestEventReceiving> * _delegate;
    bool  _errorState;
    NSObject<OS_dispatch_queue> * _eventDeliveryQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _streamingTimer;
}

- (void).cxx_destruct;
- (void)AVFoundationDeliverStreamingEvent;
- (bool)cancelUnitTestStream;
- (id)init;
- (void)initializeStreamingTimer;
- (void)setAVFoundationDelegate:(id)arg1;
- (void)setErrorState:(bool)arg1;
- (bool)startUnitTestStream:(id)arg1 options:(struct { bool x1; bool x2; })arg2;

@end
