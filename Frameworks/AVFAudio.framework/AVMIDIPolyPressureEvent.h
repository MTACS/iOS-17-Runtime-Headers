
@interface AVMIDIPolyPressureEvent : AVMIDIChannelEvent

@property unsigned int key;
@property unsigned int pressure;

- (id)initWithChannel:(unsigned int)arg1 key:(unsigned int)arg2 pressure:(unsigned int)arg3;
- (id)initWithMessage:(struct MIDIChannelMessage { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg1;
- (unsigned int)key;
- (unsigned int)pressure;
- (void)setKey:(unsigned int)arg1;
- (void)setPressure:(unsigned int)arg1;

@end
