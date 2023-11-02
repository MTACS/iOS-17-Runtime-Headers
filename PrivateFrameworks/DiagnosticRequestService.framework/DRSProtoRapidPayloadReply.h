
@interface DRSProtoRapidPayloadReply : PBCodable <NSCopying> {
    NSString * _failureReason;
    struct { 
        unsigned int success : 1; 
    }  _has;
    NSData * _replyPayload;
    bool  _success;
}

@property (nonatomic, retain) NSString *failureReason;
@property (nonatomic, readonly) bool hasFailureReason;
@property (nonatomic, readonly) bool hasReplyPayload;
@property (nonatomic) bool hasSuccess;
@property (nonatomic, retain) NSData *replyPayload;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)failureReason;
- (bool)hasFailureReason;
- (bool)hasReplyPayload;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)replyPayload;
- (void)setFailureReason:(id)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setReplyPayload:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
