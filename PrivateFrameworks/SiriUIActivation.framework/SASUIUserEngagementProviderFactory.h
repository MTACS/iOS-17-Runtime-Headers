
@interface SASUIUserEngagementProviderFactory : NSObject {
    double  _attentionLossTimeout;
    double  _samplingInterval;
    unsigned long long  _supportedAttentionAwarenessEvents;
}

+ (id)_attentionAwarenessConfigurationWithIdentifier:(id)arg1 eventMask:(unsigned long long)arg2 samplingInterval:(double)arg3 attentionLossTimeout:(double)arg4;

- (unsigned long long)_buttonPressAwarenessClientEventMask;
- (unsigned long long)_touchAttentionAwarenessEventMask;
- (id)buttonPressAwarenessClient;
- (id)initWithSamplingInterval:(double)arg1 attentionLostTimeout:(double)arg2;
- (unsigned long long)supportedEvents;
- (id)touchAttentionAwarenessClient;

@end
