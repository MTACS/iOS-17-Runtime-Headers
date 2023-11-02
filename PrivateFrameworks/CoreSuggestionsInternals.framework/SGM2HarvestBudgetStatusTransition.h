
@interface SGM2HarvestBudgetStatusTransition : PBCodable <NSCopying> {
    int  _fromStatus;
    struct { 
        unsigned int fromStatus : 1; 
        unsigned int toStatus : 1; 
    }  _has;
    int  _toStatus;
}

@property (nonatomic) int fromStatus;
@property (nonatomic) bool hasFromStatus;
@property (nonatomic) bool hasToStatus;
@property (nonatomic) int toStatus;

- (int)StringAsFromStatus:(id)arg1;
- (int)StringAsToStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fromStatus;
- (id)fromStatusAsString:(int)arg1;
- (bool)hasFromStatus;
- (bool)hasToStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFromStatus:(int)arg1;
- (void)setHasFromStatus:(bool)arg1;
- (void)setHasToStatus:(bool)arg1;
- (void)setToStatus:(int)arg1;
- (int)toStatus;
- (id)toStatusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
