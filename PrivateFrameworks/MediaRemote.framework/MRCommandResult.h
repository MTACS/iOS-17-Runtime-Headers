
@interface MRCommandResult : NSObject <NSCopying> {
    unsigned int  _endQOS;
    NSError * _error;
    MRPlayerPath * _playerPath;
    NSArray * _resultStatuses;
    unsigned int  _sendError;
    NSString * _sendErrorDescription;
    unsigned int  _startQOS;
}

@property (nonatomic) unsigned int endQOS;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, readonly, copy) NSArray *handlerReturnStatuses;
@property (nonatomic, copy) MRPlayerPath *playerPath;
@property (nonatomic, copy) NSArray *resultStatuses;
@property (nonatomic) unsigned int sendError;
@property (nonatomic, retain) NSString *sendErrorDescription;
@property (nonatomic) unsigned int startQOS;

+ (id)commandResultWithSendError:(unsigned int)arg1;
+ (id)commandResultWithSendError:(unsigned int)arg1 description:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithPlayerPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (unsigned int)endQOS;
- (id)error;
- (id)handlerReturnStatuses;
- (id)initWithData:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithHandlerStatuses:(id)arg1 sendError:(unsigned int)arg2;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithResultStatuses:(id)arg1 sendError:(unsigned int)arg2 playerPath:(id)arg3;
- (id)initWithWithSendError:(unsigned int)arg1 description:(id)arg2;
- (id)playerPath;
- (id)protobuf;
- (id)resultStatuses;
- (unsigned int)sendError;
- (id)sendErrorDescription;
- (void)setEndQOS:(unsigned int)arg1;
- (void)setError:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setResultStatuses:(id)arg1;
- (void)setSendError:(unsigned int)arg1;
- (void)setSendErrorDescription:(id)arg1;
- (void)setStartQOS:(unsigned int)arg1;
- (unsigned int)startQOS;

@end
