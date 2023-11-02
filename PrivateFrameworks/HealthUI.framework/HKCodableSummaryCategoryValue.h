
@interface HKCodableSummaryCategoryValue : PBCodable <NSCopying> {
    long long  _categoryValue;
    double  _dateData;
    struct APPLE_HKCodableSummaryCategoryValue_1 { 
        unsigned int categoryValue : 1; 
        unsigned int dateData : 1; 
    }  _has;
}

@property (nonatomic) long long categoryValue;
@property (nonatomic) double dateData;
@property (nonatomic) bool hasCategoryValue;
@property (nonatomic) bool hasDateData;

- (long long)categoryValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateData;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategoryValue;
- (bool)hasDateData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategoryValue:(long long)arg1;
- (void)setDateData:(double)arg1;
- (void)setHasCategoryValue:(bool)arg1;
- (void)setHasDateData:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
