
@interface _MRSendCommandResultProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int sendError : 1; 
    }  _has;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    int  _sendError;
    NSString * _sendErrorDescription;
    NSMutableArray * _statuses;
}

@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic) bool hasSendError;
@property (nonatomic, readonly) bool hasSendErrorDescription;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) int sendError;
@property (nonatomic, retain) NSString *sendErrorDescription;
@property (nonatomic, retain) NSMutableArray *statuses;

+ (Class)statusesType;

- (void).cxx_destruct;
- (int)StringAsSendError:(id)arg1;
- (void)addStatuses:(id)arg1;
- (void)clearStatuses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlayerPath;
- (bool)hasSendError;
- (bool)hasSendErrorDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (int)sendError;
- (id)sendErrorAsString:(int)arg1;
- (id)sendErrorDescription;
- (void)setHasSendError:(bool)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setSendError:(int)arg1;
- (void)setSendErrorDescription:(id)arg1;
- (void)setStatuses:(id)arg1;
- (id)statuses;
- (id)statusesAtIndex:(unsigned long long)arg1;
- (unsigned long long)statusesCount;
- (void)writeTo:(id)arg1;

@end
