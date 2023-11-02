
@interface AVMIDINoteEvent : AVMusicEvent {
    struct MIDINoteMessage { 
        unsigned char channel; 
        unsigned char note; 
        unsigned char velocity; 
        unsigned char releaseVelocity; 
        float duration; 
    }  _msg;
}

@property unsigned int channel;
@property double duration;
@property unsigned int key;
@property (readonly) struct MIDINoteMessage { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; float x5; }*message;
@property unsigned int velocity;

- (unsigned int)channel;
- (double)duration;
- (id)initWithChannel:(unsigned int)arg1 key:(unsigned int)arg2 velocity:(unsigned int)arg3 duration:(double)arg4;
- (id)initWithMessage:(struct MIDINoteMessage { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; float x5; }*)arg1;
- (bool)isEqualTo:(id)arg1;
- (unsigned int)key;
- (struct MIDINoteMessage { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; float x5; }*)message;
- (void)setChannel:(unsigned int)arg1;
- (void)setDuration:(double)arg1;
- (void)setKey:(unsigned int)arg1;
- (void)setVelocity:(unsigned int)arg1;
- (unsigned int)velocity;

@end
