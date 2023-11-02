
@interface VCEmulatedPacket : NSObject {
    double  _arrivalTime;
    unsigned char  _datagram;
    char * _datagramPtr;
    double  _departureTime;
    bool  _isDroppedByAQM;
    bool  _isLost;
    struct tagIDSDatagramStruct { 
        unsigned int datagramSize; 
        struct { 
            BOOL linkID; 
            unsigned short trafficClass; 
            unsigned char DSCP; 
            unsigned short streamID; 
            unsigned char channelPriority; 
        } datagramInfo; 
        struct { 
            unsigned int options_flags; 
            unsigned long long participantID; 
            unsigned short probeGroupID; 
            unsigned char channelPriority; 
            BOOL streamIDCount; 
            unsigned short streamIDs[12]; 
            unsigned char generationCounterLSB; 
            unsigned short statsID; 
            struct { 
                unsigned short serverTimestamp; 
                unsigned short serverPacketInterval; 
                unsigned short totalServerPacketReceived; 
                unsigned short totalServerPacketSent; 
                unsigned short uplinkBandwidth; 
            } statsPayload; 
            double arrivalTime; 
            unsigned long long expireTimestamp; 
            bool encryptedHBH; 
            unsigned long long encryptionSequenceNumber; 
            unsigned char packetUUID[16]; 
            bool retransmittedPacket; 
            bool nonRetransmittablePacket; 
        } datagramOptions; 
        bool isDatagramOptionsValid; 
        unsigned char datagram[1500]; 
    }  _metadata;
    double  _networkServiceTime;
    unsigned int  _packetID;
    unsigned int  _sequenceNumber;
    unsigned int  _size;
    long long  _type;
}

@property (nonatomic) double arrivalTime;
@property (nonatomic) char *datagram;
@property (nonatomic) double departureTime;
@property (nonatomic) bool isDroppedByAQM;
@property (nonatomic) bool isLost;
@property struct tagIDSDatagramStruct { unsigned int x1; struct { BOOL x_2_1_1; unsigned short x_2_1_2; unsigned char x_2_1_3; unsigned short x_2_1_4; unsigned char x_2_1_5; } x2; struct { unsigned int x_3_1_1; unsigned long long x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; BOOL x_3_1_5; unsigned short x_3_1_6[12]; unsigned char x_3_1_7; unsigned short x_3_1_8; struct { unsigned short x_9_2_1; unsigned short x_9_2_2; unsigned short x_9_2_3; unsigned short x_9_2_4; unsigned short x_9_2_5; } x_3_1_9; double x_3_1_10; unsigned long long x_3_1_11; bool x_3_1_12; unsigned long long x_3_1_13; unsigned char x_3_1_14[16]; bool x_3_1_15; bool x_3_1_16; } x3; bool x4; unsigned char x5[1500]; } metadata;
@property (nonatomic) double networkServiceTime;
@property (nonatomic, readonly) unsigned int packetID;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned int size;
@property (nonatomic) long long type;

- (double)arrivalTime;
- (char *)datagram;
- (double)departureTime;
- (id)initWithPacketID:(unsigned int)arg1;
- (id)initWithPacketID:(unsigned int)arg1 datagram:(char *)arg2 datagramSize:(unsigned int)arg3;
- (bool)isDroppedByAQM;
- (bool)isLost;
- (struct tagIDSDatagramStruct { unsigned int x1; struct { BOOL x_2_1_1; unsigned short x_2_1_2; unsigned char x_2_1_3; unsigned short x_2_1_4; unsigned char x_2_1_5; } x2; struct { unsigned int x_3_1_1; unsigned long long x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; BOOL x_3_1_5; unsigned short x_3_1_6[12]; unsigned char x_3_1_7; unsigned short x_3_1_8; struct { unsigned short x_9_2_1; unsigned short x_9_2_2; unsigned short x_9_2_3; unsigned short x_9_2_4; unsigned short x_9_2_5; } x_3_1_9; double x_3_1_10; unsigned long long x_3_1_11; bool x_3_1_12; unsigned long long x_3_1_13; unsigned char x_3_1_14[16]; bool x_3_1_15; bool x_3_1_16; } x3; bool x4; unsigned char x5[1500]; })metadata;
- (double)networkServiceTime;
- (unsigned int)packetID;
- (unsigned int)sequenceNumber;
- (void)setArrivalTime:(double)arg1;
- (void)setDatagram:(char *)arg1;
- (void)setDepartureTime:(double)arg1;
- (void)setIsDroppedByAQM:(bool)arg1;
- (void)setIsLost:(bool)arg1;
- (void)setMetadata:(struct tagIDSDatagramStruct { unsigned int x1; struct { BOOL x_2_1_1; unsigned short x_2_1_2; unsigned char x_2_1_3; unsigned short x_2_1_4; unsigned char x_2_1_5; } x2; struct { unsigned int x_3_1_1; unsigned long long x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; BOOL x_3_1_5; unsigned short x_3_1_6[12]; unsigned char x_3_1_7; unsigned short x_3_1_8; struct { unsigned short x_9_2_1; unsigned short x_9_2_2; unsigned short x_9_2_3; unsigned short x_9_2_4; unsigned short x_9_2_5; } x_3_1_9; double x_3_1_10; unsigned long long x_3_1_11; bool x_3_1_12; unsigned long long x_3_1_13; unsigned char x_3_1_14[16]; bool x_3_1_15; bool x_3_1_16; } x3; bool x4; unsigned char x5[1500]; })arg1;
- (void)setNetworkServiceTime:(double)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setType:(long long)arg1;
- (unsigned int)size;
- (long long)type;

@end
