
@interface NEPacket : NSObject <NSCopying, NSSecureCoding> {
    void * _context;
    NSData * _data;
    long long  _direction;
    NEFilterPacketInterpose * _interpose;
    NEFlowMetaData * _metadata;
    unsigned char  _protocolFamily;
}

@property (readonly, copy) NSData *data;
@property (readonly) long long direction;
@property (readonly) NEFlowMetaData *metadata;
@property (readonly) unsigned char protocolFamily;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2;
- (id)metadata;
- (unsigned char)protocolFamily;

@end
