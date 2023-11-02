
@interface HMDHomeAudioAnalysisStereoPairController : NSObject {
    NSMutableDictionary * _audioAnalysisStereoPairDetectedEventsMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)compareOrUpdateRecentAudioAnalysisStereoPairEvent:(id)arg1 key:(id)arg2 accessory:(id)arg3 notificationUUID:(id)arg4 window:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (id)init;
- (void)updateAudioAnalysisStereoPairDetectedEvent:(id)arg1 key:(id)arg2 accessory:(id)arg3 notificationUUID:(id)arg4 completion:(id /* block */)arg5;

@end
