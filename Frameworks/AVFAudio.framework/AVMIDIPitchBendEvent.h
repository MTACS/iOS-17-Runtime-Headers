
@interface AVMIDIPitchBendEvent : AVMIDIChannelEvent

@property unsigned int value;

- (id)initWithChannel:(unsigned int)arg1 value:(unsigned int)arg2;
- (id)initWithMessage:(struct MIDIChannelMessage { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg1;
- (void)setValue:(unsigned int)arg1;
- (unsigned int)value;

@end
