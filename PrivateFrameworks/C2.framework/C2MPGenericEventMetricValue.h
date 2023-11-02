
@interface C2MPGenericEventMetricValue : PBCodable <NSCopying> {
    unsigned long long  _dateValue;
    double  _doubleValue;
    struct { 
        unsigned int dateValue : 1; 
        unsigned int doubleValue : 1; 
    }  _has;
    NSString * _stringValue;
}

@property (nonatomic) unsigned long long dateValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) bool hasDateValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, retain) NSString *stringValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasDateValue;
- (bool)hasDoubleValue;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateValue:(unsigned long long)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasDateValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)writeTo:(id)arg1;

@end
