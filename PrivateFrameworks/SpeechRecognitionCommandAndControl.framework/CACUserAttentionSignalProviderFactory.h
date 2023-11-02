
@interface CACUserAttentionSignalProviderFactory : NSObject {
    double  _attentionLossTimeout;
    double  _samplingInterval;
    unsigned long long  _supportedAttentionAwarenessEvents;
}

+ (id)_attentionAwarenessConfigurationWithIdentifier:(id)arg1 eventMask:(unsigned long long)arg2 samplingInterval:(double)arg3 attentionLossTimeout:(double)arg4;

- (unsigned long long)_faceAttentionAwarenessEventMask;
- (unsigned long long)_touchAttentionAwarenessEventMask;
- (id)faceAttentionAwarenessClient;
- (id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3;
- (id)touchAttentionAwarenessClient;
- (id)wakeGestureManager;

@end
