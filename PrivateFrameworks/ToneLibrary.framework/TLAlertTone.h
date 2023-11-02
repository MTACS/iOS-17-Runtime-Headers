
@interface TLAlertTone : NSObject {
    TLSystemSound * _actualSound;
    unsigned int  _actualSoundID;
    TLSystemSound * _previewSound;
    unsigned int  _previewSoundID;
    bool  _requiresLongFormPlayback;
    NSURL * _soundFileURL;
}

@property (nonatomic, readonly) TLSystemSound *actualSound;
@property (nonatomic, readonly) TLSystemSound *previewSound;
@property (nonatomic, readonly) bool requiresLongFormPlayback;
@property (nonatomic, readonly) NSURL *soundFileURL;

- (void).cxx_destruct;
- (id)actualSound;
- (id)initWithSoundFileURL:(id)arg1 actualSoundID:(unsigned int)arg2 previewSoundID:(unsigned int)arg3 requiresLongFormPlayback:(bool)arg4;
- (id)previewSound;
- (bool)requiresLongFormPlayback;
- (id)soundFileURL;

@end
