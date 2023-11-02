
@interface HDCodableUserDomainConceptProperty : PBCodable <NSCopying> {
    bool  _boolValue;
    NSData * _dataValue;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int integerValue : 1; 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
        unsigned int valueType : 1; 
        unsigned int version : 1; 
        unsigned int boolValue : 1; 
    }  _has;
    long long  _integerValue;
    NSString * _stringValue;
    double  _timestamp;
    long long  _type;
    long long  _valueType;
    long long  _version;
}

@property (nonatomic) bool boolValue;
@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) bool hasBoolValue;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntegerValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasValueType;
@property (nonatomic) bool hasVersion;
@property (nonatomic) long long integerValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;
@property (nonatomic) long long valueType;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (bool)boolValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasBoolValue;
- (bool)hasDataValue;
- (bool)hasDoubleValue;
- (bool)hasIntegerValue;
- (bool)hasStringValue;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasValueType;
- (bool)hasVersion;
- (unsigned long long)hash;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoolValue:(bool)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasBoolValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntegerValue:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasValueType:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setValueType:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (id)stringValue;
- (double)timestamp;
- (long long)type;
- (long long)valueType;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
