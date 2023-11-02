
@interface AVMIDIChannelEvent : AVMusicEvent {
    struct MIDIChannelMessage { 
        unsigned char status; 
        unsigned char data1; 
        unsigned char data2; 
        unsigned char reserved; 
    }  _msg;
}

@property unsigned int channel;
@property (readonly) struct MIDIChannelMessage { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*message;

- (unsigned int)channel;
- (unsigned char)data1;
- (unsigned char)data2;
- (id)initWithChannel:(unsigned char)arg1 status:(unsigned char)arg2 data1:(unsigned char)arg3 data2:(unsigned char)arg4;
- (id)initWithMessage:(struct MIDIChannelMessage { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg1;
- (bool)isEqualTo:(id)arg1;
- (struct MIDIChannelMessage { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)message;
- (void)setChannel:(unsigned int)arg1;
- (void)setData1:(unsigned char)arg1;
- (void)setData2:(unsigned char)arg1;

@end
