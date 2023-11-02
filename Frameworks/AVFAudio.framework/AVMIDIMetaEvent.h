
@interface AVMIDIMetaEvent : AVMusicEvent {
    struct MIDIMetaEvent { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned char x6[1]; } * _event;
}

@property (readonly) struct MIDIMetaEvent { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned char x6[1]; }*metaEvent;
@property (readonly) long long type;

- (void)dealloc;
- (id)initWithMetaEvent:(struct MIDIMetaEvent { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned char x6[1]; }*)arg1;
- (id)initWithType:(long long)arg1 data:(id)arg2;
- (struct MIDIMetaEvent { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned char x6[1]; }*)metaEvent;
- (long long)type;

@end
