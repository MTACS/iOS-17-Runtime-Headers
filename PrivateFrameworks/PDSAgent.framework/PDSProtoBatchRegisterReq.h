
@interface PDSProtoBatchRegisterReq : PBCodable <NSCopying> {
    struct { 
        unsigned int requestTtl : 1; 
    }  _has;
    long long  _requestTtl;
    NSMutableArray * _userPushTokenRegRequests;
}

@property (nonatomic) bool hasRequestTtl;
@property (nonatomic) long long requestTtl;
@property (nonatomic, retain) NSMutableArray *userPushTokenRegRequests;

+ (Class)userPushTokenRegRequestsType;

- (void).cxx_destruct;
- (void)addUserPushTokenRegRequests:(id)arg1;
- (void)clearUserPushTokenRegRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestTtl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)requestTtl;
- (void)setHasRequestTtl:(bool)arg1;
- (void)setRequestTtl:(long long)arg1;
- (void)setUserPushTokenRegRequests:(id)arg1;
- (id)userPushTokenRegRequests;
- (id)userPushTokenRegRequestsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userPushTokenRegRequestsCount;
- (void)writeTo:(id)arg1;

@end
