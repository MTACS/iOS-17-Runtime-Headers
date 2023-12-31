
@interface GKMatchPacket : NSObject {
    unsigned short  _checksum;
    NSData * _data;
    unsigned char  _packetType;
    unsigned int  _sequenceNumber;
    unsigned int  _totalLength;
    bool  _valid;
    unsigned char  _version;
}

@property (nonatomic) unsigned short checksum;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) unsigned char packetType;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned int totalLength;
@property (nonatomic) bool valid;
@property (nonatomic) unsigned char version;

- (void).cxx_destruct;
- (unsigned short)checksum;
- (id)data;
- (id)init;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (unsigned char)packetType;
- (unsigned int)sequenceNumber;
- (void)setChecksum:(unsigned short)arg1;
- (void)setData:(id)arg1;
- (void)setPacketType:(unsigned char)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setTotalLength:(unsigned int)arg1;
- (void)setValid:(bool)arg1;
- (void)setVersion:(unsigned char)arg1;
- (unsigned int)totalLength;
- (bool)valid;
- (unsigned char)version;

@end
