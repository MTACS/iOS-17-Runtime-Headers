
@interface HKCodableSummarySupplementaryValue : PBCodable <NSCopying> {
    long long  _dataCount;
    HKCodableDateInterval * _dateInterval;
    struct APPLE_HKCodableSummarySupplementaryValue_1 { 
        unsigned int dataCount : 1; 
    }  _has;
}

@property (nonatomic) long long dataCount;
@property (nonatomic, retain) HKCodableDateInterval *dateInterval;
@property (nonatomic) bool hasDataCount;
@property (nonatomic, readonly) bool hasDateInterval;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataCount;
- (id)dateInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataCount;
- (bool)hasDateInterval;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDataCount:(long long)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setHasDataCount:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
