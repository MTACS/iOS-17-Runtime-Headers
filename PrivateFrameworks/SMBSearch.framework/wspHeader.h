
@interface wspHeader : NSObject {
    unsigned int  _checksum;
    unsigned int  _msgid;
    unsigned int  _reserved2;
    unsigned int  _status;
}

@property unsigned int checksum;
@property unsigned int msgid;
@property unsigned int reserved2;
@property unsigned int status;

- (unsigned int)checksum;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesDecoded:(unsigned int*)arg3;
- (id)init;
- (unsigned int)msgid;
- (unsigned int)reserved2;
- (void)setChecksum:(unsigned int)arg1;
- (void)setMsgid:(unsigned int)arg1;
- (void)setReserved2:(unsigned int)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;

@end
