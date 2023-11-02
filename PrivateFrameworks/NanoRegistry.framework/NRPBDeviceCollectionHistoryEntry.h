
@interface NRPBDeviceCollectionHistoryEntry : PBCodable <NSCopying> {
    double  _date;
    NRPBDeviceCollectionDiff * _diff;
    struct { 
        unsigned int date : 1; 
        unsigned int index : 1; 
    }  _has;
    long long  _index;
}

@property (nonatomic) double date;
@property (nonatomic, retain) NRPBDeviceCollectionDiff *diff;
@property (nonatomic) bool hasDate;
@property (nonatomic, readonly) bool hasDiff;
@property (nonatomic) bool hasIndex;
@property (nonatomic) long long index;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (id)diff;
- (bool)hasDate;
- (bool)hasDiff;
- (bool)hasIndex;
- (unsigned long long)hash;
- (long long)index;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setDiff:(id)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setIndex:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
