
@interface TLSystemSound : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _requiresLongFormPlayback;
    bool  _shouldDisposeOfSoundID;
    NSURL * _soundFileURL;
    unsigned int  _soundID;
}

@property (nonatomic, readonly) bool requiresLongFormPlayback;
@property (nonatomic, readonly) NSURL *soundFileURL;
@property (nonatomic, readonly) unsigned int soundID;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)_description;
- (void)_ensureUnderlyingSoundCreated;
- (void)_prepareForDealloc;
- (void)beginRequiringUnderlyingSoundLoaded;
- (void)dealloc;
- (id)description;
- (void)endRequiringUnderlyingSoundLoaded;
- (id)initWithSoundFileURL:(id)arg1 soundID:(unsigned int)arg2 requiresLongFormPlayback:(bool)arg3;
- (bool)isValid;
- (bool)requiresLongFormPlayback;
- (id)soundFileURL;
- (unsigned int)soundID;

@end
