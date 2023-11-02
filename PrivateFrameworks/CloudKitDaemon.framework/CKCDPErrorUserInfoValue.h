
@interface CKCDPErrorUserInfoValue : PBCodable <NSCopying> {
    bool  _boolValue;
    NSData * _bytesValue;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int int64Value : 1; 
        unsigned int value : 1; 
        unsigned int boolValue : 1; 
    }  _has;
    long long  _int64Value;
    NSString * _stringValue;
    int  _value;
}

@property (nonatomic) bool boolValue;
@property (nonatomic, retain) NSData *bytesValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) bool hasBoolValue;
@property (nonatomic, readonly) bool hasBytesValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasInt64Value;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasValue;
@property (nonatomic) long long int64Value;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) int value;

- (void).cxx_destruct;
- (int)StringAsValue:(id)arg1;
- (bool)boolValue;
- (id)bytesValue;
- (void)clearOneofValuesForValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasBoolValue;
- (bool)hasBytesValue;
- (bool)hasDoubleValue;
- (bool)hasInt64Value;
- (bool)hasStringValue;
- (bool)hasValue;
- (unsigned long long)hash;
- (long long)int64Value;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoolValue:(bool)arg1;
- (void)setBytesValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasBoolValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasInt64Value:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setInt64Value:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValue:(int)arg1;
- (id)stringValue;
- (int)value;
- (id)valueAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
