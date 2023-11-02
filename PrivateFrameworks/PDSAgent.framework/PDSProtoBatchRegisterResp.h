
@interface PDSProtoBatchRegisterResp : PBCodable <NSCopying> {
    struct { 
        unsigned int responseTtl : 1; 
        unsigned int retryInterval : 1; 
        unsigned int serverTimestamp : 1; 
    }  _has;
    NSString * _message;
    long long  _responseTtl;
    long long  _retryInterval;
    long long  _serverTimestamp;
    int  _status;
    NSMutableArray * _userPushTokenRegResponses;
}

@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic) bool hasResponseTtl;
@property (nonatomic) bool hasRetryInterval;
@property (nonatomic) bool hasServerTimestamp;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) long long responseTtl;
@property (nonatomic) long long retryInterval;
@property (nonatomic) long long serverTimestamp;
@property (nonatomic) int status;
@property (nonatomic, retain) NSMutableArray *userPushTokenRegResponses;

+ (Class)userPushTokenRegResponsesType;

- (void).cxx_destruct;
- (void)addUserPushTokenRegResponses:(id)arg1;
- (void)clearUserPushTokenRegResponses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessage;
- (bool)hasResponseTtl;
- (bool)hasRetryInterval;
- (bool)hasServerTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (bool)readFrom:(id)arg1;
- (long long)responseTtl;
- (long long)retryInterval;
- (long long)serverTimestamp;
- (void)setHasResponseTtl:(bool)arg1;
- (void)setHasRetryInterval:(bool)arg1;
- (void)setHasServerTimestamp:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setResponseTtl:(long long)arg1;
- (void)setRetryInterval:(long long)arg1;
- (void)setServerTimestamp:(long long)arg1;
- (void)setStatus:(int)arg1;
- (void)setUserPushTokenRegResponses:(id)arg1;
- (int)status;
- (id)userPushTokenRegResponses;
- (id)userPushTokenRegResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)userPushTokenRegResponsesCount;
- (void)writeTo:(id)arg1;

@end
