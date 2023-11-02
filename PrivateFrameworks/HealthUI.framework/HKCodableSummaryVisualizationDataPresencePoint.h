
@interface HKCodableSummaryVisualizationDataPresencePoint : PBCodable <NSCopying> {
    bool  _dataPresent;
    HKCodableDateInterval * _dateInterval;
    struct APPLE_HKCodableSummaryVisualizationDataPresencePoint_1 { 
        unsigned int dataPresent : 1; 
    }  _has;
}

@property (nonatomic) bool dataPresent;
@property (nonatomic, retain) HKCodableDateInterval *dateInterval;
@property (nonatomic) bool hasDataPresent;
@property (nonatomic, readonly) bool hasDateInterval;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dataPresent;
- (id)dateInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataPresent;
- (bool)hasDateInterval;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDataPresent:(bool)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setHasDataPresent:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
