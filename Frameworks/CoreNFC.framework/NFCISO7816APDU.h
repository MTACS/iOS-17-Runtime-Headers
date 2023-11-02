
@interface NFCISO7816APDU : NSObject <NSCopying> {
    NSData * _fullPacket;
    long long  _le;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _payloadOffset;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) long long expectedResponseLength;
@property (nonatomic, readonly) unsigned char instructionClass;
@property (nonatomic, readonly) unsigned char instructionCode;
@property (nonatomic, readonly) unsigned char p1Parameter;
@property (nonatomic, readonly) unsigned char p2Parameter;

- (void).cxx_destruct;
- (id)asData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (long long)expectedResponseLength;
- (id)initWithData:(id)arg1;
- (id)initWithInstructionClass:(unsigned char)arg1 instructionCode:(unsigned char)arg2 p1Parameter:(unsigned char)arg3 p2Parameter:(unsigned char)arg4 data:(id)arg5 expectedResponseLength:(long long)arg6;
- (unsigned char)instructionClass;
- (unsigned char)instructionCode;
- (unsigned char)p1Parameter;
- (unsigned char)p2Parameter;

@end
