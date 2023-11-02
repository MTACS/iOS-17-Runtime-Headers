
@interface NRPBDeviceDiffType : PBCodable <NSCopying> {
    int  _changeType;
    NRPBDeviceDiff * _diff;
    struct { 
        unsigned int changeType : 1; 
    }  _has;
}

@property (nonatomic) int changeType;
@property (nonatomic, retain) NRPBDeviceDiff *diff;
@property (nonatomic) bool hasChangeType;
@property (nonatomic, readonly) bool hasDiff;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)diff;
- (bool)hasChangeType;
- (bool)hasDiff;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setDiff:(id)arg1;
- (void)setHasChangeType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
