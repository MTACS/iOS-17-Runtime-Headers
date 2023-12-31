
@interface NPKProtoQueueTSMConnectionResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int pending : 1; 
    }  _has;
    bool  _pending;
}

@property (nonatomic) bool hasPending;
@property (nonatomic) bool pending;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPending;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
