
@interface MRTransactionPacket : NSObject <NSCopying> {
    NSMutableData * _data;
    NSString * _identifier;
    _MRTransactionKeyProtobuf * _key;
    unsigned long long  _totalLength;
    unsigned long long  _totalWritePosition;
    unsigned long long  _writeLength;
    unsigned long long  _writePosition;
}

@property (nonatomic, readonly) unsigned long long actualLength;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _MRTransactionKeyProtobuf *key;
@property (nonatomic, readonly) _MRTransactionPacketProtobuf *protobuf;
@property (getter=isReadComplete, nonatomic, readonly) bool readComplete;
@property (nonatomic, readonly) unsigned long long totalLength;
@property (nonatomic, readonly) unsigned long long totalWritePosition;
@property (getter=isWriteComplete, nonatomic, readonly) bool writeComplete;
@property (nonatomic) unsigned long long writeLength;
@property (nonatomic, readonly) unsigned long long writePosition;

- (void).cxx_destruct;
- (unsigned long long)actualLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)identifier;
- (id)initWithData:(id)arg1 forKey:(id)arg2;
- (id)initWithPackets:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isComplete;
- (bool)isReadComplete;
- (bool)isWriteComplete;
- (id)key;
- (id)protobuf;
- (void)setWriteLength:(unsigned long long)arg1;
- (unsigned long long)totalLength;
- (unsigned long long)totalWritePosition;
- (void)writeComplete;
- (unsigned long long)writeLength;
- (unsigned long long)writePosition;

@end
