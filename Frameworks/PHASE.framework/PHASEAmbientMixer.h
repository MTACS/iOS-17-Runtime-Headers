
@interface PHASEAmbientMixer : PHASEMixer {
    void * _actionTreeManager;
    struct UniqueObjectId { 
        unsigned long long mStorage[2]; 
    }  _actionTreeObjectId;
    AVAudioChannelLayout * _inputChannelLayout;
    PHASEListener * _listener;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _orientation;
    unsigned long long  _submixHashName;
}

@property (nonatomic, readonly) AVAudioChannelLayout *inputChannelLayout;
@property (nonatomic, readonly) PHASEListener *listener;
@property (nonatomic) struct { } orientation;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)arg1 listener:(id)arg2 inputChannelLayout:(id)arg3 orientation:(struct { })arg4 engine:(id)arg5 actionTreeObjectId:(struct UniqueObjectId { unsigned long long x1[2]; })arg6;
- (id)inputChannelLayout;
- (id)listener;
- (struct { })orientation;
- (void)setOrientation:(struct { })arg1;

@end
