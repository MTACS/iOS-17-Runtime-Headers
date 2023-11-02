
@interface ISWrappedAVAudioSession : NSObject {
    AVAudioSession * _audioSession;
    bool  _didBeginObservingOutputVolume;
    NSString * _expectedCategory;
    NSHashTable * _main_volumeObservers;
}

@property (nonatomic, readonly) AVAudioSession *audioSession;
@property (nonatomic, readonly) NSString *category;

+ (id)auxiliarySession;
+ (id)sharedAmbientInstance;
+ (void)sharedAmbientInstanceWithLoadHandler:(id /* block */)arg1;
+ (id)sharedPhotosOneUpInstance;
+ (void)sharedPhotosOneUpInstanceWithLoadHandler:(id /* block */)arg1;
+ (id)sharedVideoPlaybackInstance;
+ (void)sharedVideoPlaybackInstanceWithLoadHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_beginObservingOutputVolumeIfNeeded;
- (void)_endObservingOutputVolumeIfNeeded;
- (void)_main_informObserversOfVolumeChangeFrom:(float)arg1 to:(float)arg2;
- (id)audioSession;
- (id)category;
- (void)dealloc;
- (id)initWithAudioSession:(id)arg1;
- (id)initWithAudioSession:(id)arg1 category:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)registerVolumeObserver:(id)arg1;
- (bool)setActive:(bool)arg1 error:(id*)arg2;
- (bool)setCategory:(id)arg1 error:(id*)arg2;
- (bool)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
- (bool)setCategory:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)unregisterVolumeObserver:(id)arg1;

@end
