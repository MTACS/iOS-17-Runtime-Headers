
@interface NFCommandAPDU : NSObject {
    unsigned char  _class;
    NSData * _data;
    unsigned char  _instruction;
    unsigned int  _lengthExpected;
    unsigned char  _p1;
    unsigned char  _p2;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _payloadRange;
}

@property (nonatomic, readonly) unsigned char clss;
@property (nonatomic, readonly) unsigned char instruction;
@property (nonatomic, readonly) unsigned int lengthExpected;
@property (nonatomic, readonly) unsigned char p1;
@property (nonatomic, readonly) unsigned char p2;
@property (nonatomic, readonly) NSData *payload;
@property (nonatomic, readonly) const char *payloadBytes;
@property (nonatomic, readonly) unsigned int payloadLength;

+ (id)appendExpectedLength:(unsigned short)arg1 usingExtendedLength:(bool)arg2 toAPDU:(id)arg3;
+ (id)buildAPDUHeaderWithClass:(unsigned char)arg1 instruction:(unsigned char)arg2 p1:(unsigned char)arg3 p2:(unsigned char)arg4 len:(unsigned int)arg5 useExtendedLength:(bool)arg6;

- (void).cxx_destruct;
- (unsigned char)clss;
- (id)initWithBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 uniformLengthCheck:(bool)arg2;
- (unsigned char)instruction;
- (bool)isGetMoreVasDataCommand;
- (bool)isGetVasDataCommand;
- (bool)isSelectByDFNameCommand;
- (bool)isSelectCommand;
- (bool)isSendCertificateCommand;
- (unsigned int)lengthExpected;
- (unsigned char)p1;
- (unsigned char)p2;
- (id)payload;
- (const char *)payloadBytes;
- (unsigned int)payloadLength;

@end
