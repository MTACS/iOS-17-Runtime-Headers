
@interface SharedChannelCreateResponse : PBCodable <NSCopying> {
    ChannelIdentity * _channelIdentity;
    struct { 
        unsigned int retryIntervalSeconds : 1; 
        unsigned int status : 1; 
    }  _has;
    unsigned int  _retryIntervalSeconds;
    int  _status;
}

@property (nonatomic, retain) ChannelIdentity *channelIdentity;
@property (nonatomic, readonly) bool hasChannelIdentity;
@property (nonatomic) bool hasRetryIntervalSeconds;
@property (nonatomic) bool hasStatus;
@property (nonatomic) unsigned int retryIntervalSeconds;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)channelIdentity;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChannelIdentity;
- (bool)hasRetryIntervalSeconds;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)retryIntervalSeconds;
- (void)setChannelIdentity:(id)arg1;
- (void)setHasRetryIntervalSeconds:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setRetryIntervalSeconds:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
