
@interface HKCodableSummaryOngoingFactorsValue : PBCodable <NSCopying> {
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categoryValueRawValues;
    double  _earliestStartDate;
    struct APPLE_HKCodableSummaryOngoingFactorsValue_1 { 
        unsigned int earliestStartDate : 1; 
        unsigned int latestEndDate : 1; 
    }  _has;
    double  _latestEndDate;
}

@property (nonatomic, readonly) long long*categoryValueRawValues;
@property (nonatomic, readonly) unsigned long long categoryValueRawValuesCount;
@property (nonatomic) double earliestStartDate;
@property (nonatomic) bool hasEarliestStartDate;
@property (nonatomic) bool hasLatestEndDate;
@property (nonatomic) double latestEndDate;

- (void)addCategoryValueRawValues:(long long)arg1;
- (long long*)categoryValueRawValues;
- (long long)categoryValueRawValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryValueRawValuesCount;
- (void)clearCategoryValueRawValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)earliestStartDate;
- (bool)hasEarliestStartDate;
- (bool)hasLatestEndDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)latestEndDate;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategoryValueRawValues:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setEarliestStartDate:(double)arg1;
- (void)setHasEarliestStartDate:(bool)arg1;
- (void)setHasLatestEndDate:(bool)arg1;
- (void)setLatestEndDate:(double)arg1;
- (void)writeTo:(id)arg1;

@end
