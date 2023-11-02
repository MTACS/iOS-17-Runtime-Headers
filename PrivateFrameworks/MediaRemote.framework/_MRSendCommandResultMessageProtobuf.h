
@interface _MRSendCommandResultMessageProtobuf : PBCodable <NSCopying> {
    NSString * _commandID;
    _MRSendCommandResultProtobuf * _commandResult;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _handlerReturnStatus;
    NSMutableArray * _handlerReturnStatusDatas;
    struct { 
        unsigned int sendError : 1; 
    }  _has;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    int  _sendError;
}

@property (nonatomic, retain) NSString *commandID;
@property (nonatomic, retain) _MRSendCommandResultProtobuf *commandResult;
@property (nonatomic, readonly) int*handlerReturnStatus;
@property (nonatomic, readonly) unsigned long long handlerReturnStatusCount;
@property (nonatomic, retain) NSMutableArray *handlerReturnStatusDatas;
@property (nonatomic, readonly) bool hasCommandID;
@property (nonatomic, readonly) bool hasCommandResult;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic) bool hasSendError;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) int sendError;

+ (Class)handlerReturnStatusDataType;

- (void).cxx_destruct;
- (int)StringAsHandlerReturnStatus:(id)arg1;
- (int)StringAsSendError:(id)arg1;
- (void)addHandlerReturnStatus:(int)arg1;
- (void)addHandlerReturnStatusData:(id)arg1;
- (void)clearHandlerReturnStatus;
- (void)clearHandlerReturnStatusDatas;
- (id)commandID;
- (id)commandResult;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int*)handlerReturnStatus;
- (id)handlerReturnStatusAsString:(int)arg1;
- (int)handlerReturnStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)handlerReturnStatusCount;
- (id)handlerReturnStatusDataAtIndex:(unsigned long long)arg1;
- (id)handlerReturnStatusDatas;
- (unsigned long long)handlerReturnStatusDatasCount;
- (bool)hasCommandID;
- (bool)hasCommandResult;
- (bool)hasPlayerPath;
- (bool)hasSendError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (int)sendError;
- (id)sendErrorAsString:(int)arg1;
- (void)setCommandID:(id)arg1;
- (void)setCommandResult:(id)arg1;
- (void)setHandlerReturnStatus:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHandlerReturnStatusDatas:(id)arg1;
- (void)setHasSendError:(bool)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setSendError:(int)arg1;
- (void)writeTo:(id)arg1;

@end
