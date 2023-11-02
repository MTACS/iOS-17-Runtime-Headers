
@interface PDSProtoUserPushTokenRegRequest : PBRequest <NSCopying> {
    NSMutableArray * _deviceInfos;
    struct { 
        unsigned int ttl : 1; 
    }  _has;
    NSMutableArray * _topics;
    long long  _ttl;
    PDSProtoUserPushToken * _userPushToken;
}

@property (nonatomic, retain) NSMutableArray *deviceInfos;
@property (nonatomic) bool hasTtl;
@property (nonatomic, retain) NSMutableArray *topics;
@property (nonatomic) long long ttl;
@property (nonatomic, retain) PDSProtoUserPushToken *userPushToken;

+ (Class)deviceInfoType;
+ (Class)topicType;

- (void).cxx_destruct;
- (void)addDeviceInfo:(id)arg1;
- (void)addTopic:(id)arg1;
- (void)clearDeviceInfos;
- (void)clearTopics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInfoAtIndex:(unsigned long long)arg1;
- (id)deviceInfos;
- (unsigned long long)deviceInfosCount;
- (id)dictionaryRepresentation;
- (bool)hasTtl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceInfos:(id)arg1;
- (void)setHasTtl:(bool)arg1;
- (void)setTopics:(id)arg1;
- (void)setTtl:(long long)arg1;
- (void)setUserPushToken:(id)arg1;
- (id)topicAtIndex:(unsigned long long)arg1;
- (id)topics;
- (unsigned long long)topicsCount;
- (long long)ttl;
- (id)userPushToken;
- (void)writeTo:(id)arg1;

@end
