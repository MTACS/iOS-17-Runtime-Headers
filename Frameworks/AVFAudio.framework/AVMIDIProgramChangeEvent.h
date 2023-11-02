
@interface AVMIDIProgramChangeEvent : AVMIDIChannelEvent

@property unsigned int programNumber;

- (id)initWithChannel:(unsigned int)arg1 programNumber:(unsigned int)arg2;
- (id)initWithMessage:(struct MIDIChannelMessage { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg1;
- (unsigned int)programNumber;
- (void)setProgramNumber:(unsigned int)arg1;

@end
