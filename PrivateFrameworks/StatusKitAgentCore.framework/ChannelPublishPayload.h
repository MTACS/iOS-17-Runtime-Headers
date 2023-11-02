
@interface ChannelPublishPayload : PBCodable <NSCopying> {
    NSString * _adopter;
    ChannelIdentity * _channelIdentity;
    struct { 
        unsigned int publishInitiateTimestampMillis : 1; 
        unsigned int publishPayloadExpiryTtlMillis : 1; 
        unsigned int pushPriority : 1; 
        unsigned int retryCount : 1; 
        unsigned int pendingPublishHint : 1; 
        unsigned int scheduledPublishHint : 1; 
    }  _has;
    bool  _pendingPublishHint;
    unsigned long long  _publishInitiateTimestampMillis;
    NSData * _publishPayload;
    unsigned long long  _publishPayloadExpiryTtlMillis;
    int  _pushPriority;
    unsigned int  _retryCount;
    bool  _scheduledPublishHint;
}

@property (nonatomic, retain) NSString *adopter;
@property (nonatomic, retain) ChannelIdentity *channelIdentity;
@property (nonatomic, readonly) bool hasAdopter;
@property (nonatomic, readonly) bool hasChannelIdentity;
@property (nonatomic) bool hasPendingPublishHint;
@property (nonatomic) bool hasPublishInitiateTimestampMillis;
@property (nonatomic, readonly) bool hasPublishPayload;
@property (nonatomic) bool hasPublishPayloadExpiryTtlMillis;
@property (nonatomic) bool hasPushPriority;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasScheduledPublishHint;
@property (nonatomic) bool pendingPublishHint;
@property (nonatomic) unsigned long long publishInitiateTimestampMillis;
@property (nonatomic, retain) NSData *publishPayload;
@property (nonatomic) unsigned long long publishPayloadExpiryTtlMillis;
@property (nonatomic) int pushPriority;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) bool scheduledPublishHint;

- (void).cxx_destruct;
- (int)StringAsPushPriority:(id)arg1;
- (id)adopter;
- (id)channelIdentity;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAdopter;
- (bool)hasChannelIdentity;
- (bool)hasPendingPublishHint;
- (bool)hasPublishInitiateTimestampMillis;
- (bool)hasPublishPayload;
- (bool)hasPublishPayloadExpiryTtlMillis;
- (bool)hasPushPriority;
- (bool)hasRetryCount;
- (bool)hasScheduledPublishHint;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pendingPublishHint;
- (unsigned long long)publishInitiateTimestampMillis;
- (id)publishPayload;
- (unsigned long long)publishPayloadExpiryTtlMillis;
- (int)pushPriority;
- (id)pushPriorityAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)retryCount;
- (bool)scheduledPublishHint;
- (void)setAdopter:(id)arg1;
- (void)setChannelIdentity:(id)arg1;
- (void)setHasPendingPublishHint:(bool)arg1;
- (void)setHasPublishInitiateTimestampMillis:(bool)arg1;
- (void)setHasPublishPayloadExpiryTtlMillis:(bool)arg1;
- (void)setHasPushPriority:(bool)arg1;
- (void)setHasRetryCount:(bool)arg1;
- (void)setHasScheduledPublishHint:(bool)arg1;
- (void)setPendingPublishHint:(bool)arg1;
- (void)setPublishInitiateTimestampMillis:(unsigned long long)arg1;
- (void)setPublishPayload:(id)arg1;
- (void)setPublishPayloadExpiryTtlMillis:(unsigned long long)arg1;
- (void)setPushPriority:(int)arg1;
- (void)setRetryCount:(unsigned int)arg1;
- (void)setScheduledPublishHint:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
