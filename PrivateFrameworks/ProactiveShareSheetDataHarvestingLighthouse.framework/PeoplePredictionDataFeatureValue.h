
@interface PeoplePredictionDataFeatureValue : PBCodable <NSCopying> {
    bool  _boolValue;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int intValue : 1; 
        unsigned int timeBucketValue : 1; 
        unsigned int boolValue : 1; 
    }  _has;
    unsigned int  _intValue;
    NSString * _stringValue;
    int  _timeBucketValue;
}

@property (nonatomic) bool boolValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) bool hasBoolValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasTimeBucketValue;
@property (nonatomic) unsigned int intValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) int timeBucketValue;

- (void).cxx_destruct;
- (int)StringAsTimeBucketValue:(id)arg1;
- (bool)boolValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasBoolValue;
- (bool)hasDoubleValue;
- (bool)hasIntValue;
- (bool)hasStringValue;
- (bool)hasTimeBucketValue;
- (unsigned long long)hash;
- (unsigned int)intValue;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoolValue:(bool)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasBoolValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntValue:(bool)arg1;
- (void)setHasTimeBucketValue:(bool)arg1;
- (void)setIntValue:(unsigned int)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTimeBucketValue:(int)arg1;
- (id)stringValue;
- (int)timeBucketValue;
- (id)timeBucketValueAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
