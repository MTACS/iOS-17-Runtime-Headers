
@interface _MLNetworkPacket : NSObject {
    NSMutableData * _buffer;
    unsigned long long  _command;
    NSMutableData * _doubleBuffer;
    unsigned long long  _sizeOfPacket;
}

@property (nonatomic, retain) NSMutableData *buffer;
@property (nonatomic) unsigned long long command;
@property (nonatomic, retain) NSMutableData *doubleBuffer;
@property (nonatomic) unsigned long long sizeOfPacket;

- (void).cxx_destruct;
- (id)buffer;
- (void)cleanupDoubleBuffer;
- (unsigned long long)command;
- (id)doubleBuffer;
- (id)init;
- (void)reset;
- (void)resetDoubleBuffer;
- (void)resetMetadata;
- (void)setBuffer:(id)arg1;
- (void)setCommand:(unsigned long long)arg1;
- (void)setDoubleBuffer:(id)arg1;
- (void)setSizeOfPacket:(unsigned long long)arg1;
- (unsigned long long)sizeOfPacket;

@end
