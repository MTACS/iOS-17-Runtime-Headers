
@interface DRSProtoDecisionResult : PBCodable <NSCopying> {
    bool  _accepted;
    struct { 
        unsigned int accepted : 1; 
    }  _has;
    NSString * _rejectionReason;
}

@property (nonatomic) bool accepted;
@property (nonatomic) bool hasAccepted;
@property (nonatomic, readonly) bool hasRejectionReason;
@property (nonatomic, retain) NSString *rejectionReason;

- (void).cxx_destruct;
- (bool)accepted;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccepted;
- (bool)hasRejectionReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rejectionReason;
- (void)setAccepted:(bool)arg1;
- (void)setHasAccepted:(bool)arg1;
- (void)setRejectionReason:(id)arg1;
- (void)writeTo:(id)arg1;

@end
