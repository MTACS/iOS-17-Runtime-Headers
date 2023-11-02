
@interface AVMIDIControlChangeEvent : AVMIDIChannelEvent

@property (readonly) long long messageType;
@property (readonly) unsigned int value;

- (id)initWithChannel:(unsigned int)arg1 messageType:(long long)arg2 value:(unsigned int)arg3;
- (id)initWithMessage:(struct MIDIChannelMessage { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg1;
- (long long)messageType;
- (unsigned int)value;

@end
