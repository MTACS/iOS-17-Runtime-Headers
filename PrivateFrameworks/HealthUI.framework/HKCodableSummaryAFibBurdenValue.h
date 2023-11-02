
@interface HKCodableSummaryAFibBurdenValue : PBCodable <NSCopying> {
    HKCodableAFibBurdenValue * _burdenValue;
    HKCodableDayIndexRange * _lastAnalysisDayIndexRange;
}

@property (nonatomic, retain) HKCodableAFibBurdenValue *burdenValue;
@property (nonatomic, readonly) bool hasBurdenValue;
@property (nonatomic, readonly) bool hasLastAnalysisDayIndexRange;
@property (nonatomic, retain) HKCodableDayIndexRange *lastAnalysisDayIndexRange;

- (void).cxx_destruct;
- (id)burdenValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBurdenValue;
- (bool)hasLastAnalysisDayIndexRange;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastAnalysisDayIndexRange;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBurdenValue:(id)arg1;
- (void)setLastAnalysisDayIndexRange:(id)arg1;
- (void)writeTo:(id)arg1;

@end
