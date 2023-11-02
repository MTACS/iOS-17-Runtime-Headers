
@interface VTSiriNotifications : NSObject {
    struct __CFNotificationCenter { } * _center;
    VTSiriPHash * _hasher;
}

- (void).cxx_destruct;
- (void)broadcastAudioPayload:(id)arg1 numSamples:(unsigned long long)arg2 superVectorScore:(double)arg3 absoluteTime:(unsigned long long)arg4;
- (id)init;

@end
