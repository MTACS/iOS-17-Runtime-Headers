
@interface _UIFocusSoundPool : NSObject {
    unsigned int  _originalSystemSoundID;
    NSArray * _queue;
    unsigned long long  _queueIndex;
    NSURL * _soundFileURL;
}

- (void).cxx_destruct;
- (id)initWithSoundFileURL:(id)arg1;
- (id)initWithSystemSoundID:(unsigned int)arg1;
- (unsigned int)originalSystemSoundID;
- (unsigned int)playableSystemSoundID;

@end
