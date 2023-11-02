
@interface VCMediaControlInfoMultiwayAudio : VCMediaControlInfo {
    unsigned int  _controlInfoMKI;
    unsigned int  _controlInfoROC;
}

- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; bool x9; bool x10; unsigned char x11; }*)arg3;
- (id)description;
- (int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned int)arg4;
- (bool)hasInfoType:(unsigned int)arg1;
- (id)init;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; bool x9; bool x10; unsigned char x11; }*)arg3 version:(unsigned char)arg4;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3;
- (unsigned long long)serializedSize;
- (int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;

@end
