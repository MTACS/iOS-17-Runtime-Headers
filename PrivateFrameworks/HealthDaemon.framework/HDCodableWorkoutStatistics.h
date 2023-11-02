
@interface HDCodableWorkoutStatistics : PBCodable <NSCopying> {
    double  _avgQuantity;
    struct { 
        unsigned int avgQuantity : 1; 
        unsigned int maxQuantity : 1; 
        unsigned int minQuantity : 1; 
        unsigned int quantityType : 1; 
        unsigned int sumQuantity : 1; 
    }  _has;
    double  _maxQuantity;
    double  _minQuantity;
    long long  _quantityType;
    double  _sumQuantity;
}

@property (nonatomic) double avgQuantity;
@property (nonatomic) bool hasAvgQuantity;
@property (nonatomic) bool hasMaxQuantity;
@property (nonatomic) bool hasMinQuantity;
@property (nonatomic) bool hasQuantityType;
@property (nonatomic) bool hasSumQuantity;
@property (nonatomic) double maxQuantity;
@property (nonatomic) double minQuantity;
@property (nonatomic) long long quantityType;
@property (nonatomic) double sumQuantity;

- (double)avgQuantity;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvgQuantity;
- (bool)hasMaxQuantity;
- (bool)hasMinQuantity;
- (bool)hasQuantityType;
- (bool)hasSumQuantity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)maxQuantity;
- (void)mergeFrom:(id)arg1;
- (double)minQuantity;
- (long long)quantityType;
- (bool)readFrom:(id)arg1;
- (void)setAvgQuantity:(double)arg1;
- (void)setHasAvgQuantity:(bool)arg1;
- (void)setHasMaxQuantity:(bool)arg1;
- (void)setHasMinQuantity:(bool)arg1;
- (void)setHasQuantityType:(bool)arg1;
- (void)setHasSumQuantity:(bool)arg1;
- (void)setMaxQuantity:(double)arg1;
- (void)setMinQuantity:(double)arg1;
- (void)setQuantityType:(long long)arg1;
- (void)setSumQuantity:(double)arg1;
- (double)sumQuantity;
- (void)writeTo:(id)arg1;

@end
