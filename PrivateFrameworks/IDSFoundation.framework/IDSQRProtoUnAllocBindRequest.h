
@interface IDSQRProtoUnAllocBindRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
}

@property (nonatomic) bool hasReason;
@property (nonatomic) int reason;

- (int)StringAsReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)writeTo:(id)arg1;

@end
