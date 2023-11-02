
@interface VCMediaControlInfo : NSObject {
    unsigned short  _bitmap;
    _Atomic unsigned int  _controlInfoInUseCounter;
    id  _delegate;
    struct tagVCMediaControlInfoRealtimeDelegateProtocolVTable { 
        int (*disposeControlInfo)(); 
    }  _delegateVTable;
    unsigned char  _fecFeedbackVersion;
    unsigned long long  _serializedSize;
    unsigned char  _version;
    struct tagVCMediaControlVTableC { 
        int (*serializedSize)(); 
        int (*serialize)(); 
    }  _vtableC;
}

@property unsigned char fecFeedbackVersion;
@property (readonly) unsigned long long serializedSize;
@property unsigned char version;

- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; bool x9; bool x10; unsigned char x11; }*)arg3;
- (unsigned char)fecFeedbackVersion;
- (int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned int)arg4;
- (int)getInfoUnserialized:(struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned int x11; unsigned int x12; unsigned short x13; unsigned short x14; }*)arg1 type:(unsigned int)arg2;
- (bool)hasInfoType:(unsigned int)arg1;
- (id)init;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; bool x9; bool x10; unsigned char x11; }*)arg3 version:(unsigned char)arg4;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3;
- (unsigned long long)serializedSize;
- (void)setFecFeedbackVersion:(unsigned char)arg1;
- (int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (int)setInfoUnserialized:(struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned int x11; unsigned int x12; unsigned short x13; unsigned short x14; }*)arg1 type:(unsigned int)arg2;
- (void)setVersion:(unsigned char)arg1;
- (unsigned char)version;

@end
