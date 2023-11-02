
@interface AWDTransportHistoryRecord : PBCodable <NSCopying> {
    NSMutableArray * _connectionInfos;
    int  _connectionMethod;
    struct { 
        unsigned int timestampFailure : 1; 
        unsigned int connectionMethod : 1; 
        unsigned int transport : 1; 
        unsigned int transportSwitchReasonErrorCode : 1; 
        unsigned int transportSwitchReasonErrorDomain : 1; 
    }  _has;
    unsigned long long  _timestampFailure;
    int  _transport;
    unsigned int  _transportSwitchReasonErrorCode;
    int  _transportSwitchReasonErrorDomain;
}

@property (nonatomic, retain) NSMutableArray *connectionInfos;
@property (nonatomic) int connectionMethod;
@property (nonatomic) bool hasConnectionMethod;
@property (nonatomic) bool hasTimestampFailure;
@property (nonatomic) bool hasTransport;
@property (nonatomic) bool hasTransportSwitchReasonErrorCode;
@property (nonatomic) bool hasTransportSwitchReasonErrorDomain;
@property (nonatomic) unsigned long long timestampFailure;
@property (nonatomic) int transport;
@property (nonatomic) unsigned int transportSwitchReasonErrorCode;
@property (nonatomic) int transportSwitchReasonErrorDomain;

+ (Class)connectionInfoType;

- (int)StringAsConnectionMethod:(id)arg1;
- (int)StringAsTransport:(id)arg1;
- (int)StringAsTransportSwitchReasonErrorDomain:(id)arg1;
- (void)addConnectionInfo:(id)arg1;
- (void)clearConnectionInfos;
- (id)connectionInfoAtIndex:(unsigned long long)arg1;
- (id)connectionInfos;
- (unsigned long long)connectionInfosCount;
- (int)connectionMethod;
- (id)connectionMethodAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectionMethod;
- (bool)hasTimestampFailure;
- (bool)hasTransport;
- (bool)hasTransportSwitchReasonErrorCode;
- (bool)hasTransportSwitchReasonErrorDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnectionInfos:(id)arg1;
- (void)setConnectionMethod:(int)arg1;
- (void)setHasConnectionMethod:(bool)arg1;
- (void)setHasTimestampFailure:(bool)arg1;
- (void)setHasTransport:(bool)arg1;
- (void)setHasTransportSwitchReasonErrorCode:(bool)arg1;
- (void)setHasTransportSwitchReasonErrorDomain:(bool)arg1;
- (void)setTimestampFailure:(unsigned long long)arg1;
- (void)setTransport:(int)arg1;
- (void)setTransportSwitchReasonErrorCode:(unsigned int)arg1;
- (void)setTransportSwitchReasonErrorDomain:(int)arg1;
- (unsigned long long)timestampFailure;
- (int)transport;
- (id)transportAsString:(int)arg1;
- (unsigned int)transportSwitchReasonErrorCode;
- (int)transportSwitchReasonErrorDomain;
- (id)transportSwitchReasonErrorDomainAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
