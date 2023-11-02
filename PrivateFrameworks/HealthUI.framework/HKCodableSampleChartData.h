
@interface HKCodableSampleChartData : PBCodable <NSCopying> {
    long long  _dataType;
    double  _endDate;
    struct APPLE_HKCodableSampleChartData_1 { 
        unsigned int dataType : 1; 
        unsigned int endDate : 1; 
        unsigned int int64Value : 1; 
        unsigned int startDate : 1; 
    }  _has;
    long long  _int64Value;
    HKCodableMetadataDictionary * _metadataDictionary;
    HKCodableQuantity * _quantity;
    double  _startDate;
}

@property (nonatomic) long long dataType;
@property (nonatomic) double endDate;
@property (nonatomic) bool hasDataType;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasInt64Value;
@property (nonatomic, readonly) bool hasMetadataDictionary;
@property (nonatomic, readonly) bool hasQuantity;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) long long int64Value;
@property (nonatomic, retain) HKCodableMetadataDictionary *metadataDictionary;
@property (nonatomic, retain) HKCodableQuantity *quantity;
@property (nonatomic) double startDate;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataType;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasDataType;
- (bool)hasEndDate;
- (bool)hasInt64Value;
- (bool)hasMetadataDictionary;
- (bool)hasQuantity;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (long long)int64Value;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadataDictionary;
- (id)quantity;
- (bool)readFrom:(id)arg1;
- (void)setDataType:(long long)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasDataType:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasInt64Value:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setInt64Value:(long long)arg1;
- (void)setMetadataDictionary:(id)arg1;
- (void)setQuantity:(id)arg1;
- (void)setStartDate:(double)arg1;
- (double)startDate;
- (void)writeTo:(id)arg1;

@end
