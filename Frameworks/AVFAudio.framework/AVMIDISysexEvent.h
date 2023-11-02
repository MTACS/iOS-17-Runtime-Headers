
@interface AVMIDISysexEvent : AVMusicEvent {
    NSMutableData * _sysexData;
}

@property (readonly) struct MIDIRawData { unsigned int x1; unsigned char x2[1]; }*rawData;
@property (readonly) unsigned int sizeInBytes;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithMIDIRawData:(struct MIDIRawData { unsigned int x1; unsigned char x2[1]; }*)arg1;
- (struct MIDIRawData { unsigned int x1; unsigned char x2[1]; }*)rawData;
- (unsigned int)sizeInBytes;

@end
