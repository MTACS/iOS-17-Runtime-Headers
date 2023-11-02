
@interface FPSearchableItemValue : PBCodable <NSCopying> {
    NSMutableArray * _arrayOfStringsValues;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int integerValue : 1; 
        unsigned int timeIntervalSinceReferenceDateValue : 1; 
    }  _has;
    long long  _integerValue;
    NSData * _nameComponents;
    NSString * _stringValue;
    double  _timeIntervalSinceReferenceDateValue;
}

@property (nonatomic, retain) NSMutableArray *arrayOfStringsValues;
@property (nonatomic) double doubleValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntegerValue;
@property (nonatomic, readonly) bool hasNameComponents;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasTimeIntervalSinceReferenceDateValue;
@property (nonatomic) long long integerValue;
@property (nonatomic, retain) NSData *nameComponents;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) double timeIntervalSinceReferenceDateValue;

+ (Class)arrayOfStringsValueType;
+ (id)objectFromString:(id)arg1;
+ (id)stringArrayFromObject:(id)arg1;
+ (id)stringFromObject:(id)arg1;

- (void).cxx_destruct;
- (void)addArrayOfStringsValue:(id)arg1;
- (id)arrayOfStringsValueAtIndex:(unsigned long long)arg1;
- (id)arrayOfStringsValues;
- (unsigned long long)arrayOfStringsValuesCount;
- (void)clearArrayOfStringsValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasDoubleValue;
- (bool)hasIntegerValue;
- (bool)hasNameComponents;
- (bool)hasStringValue;
- (bool)hasTimeIntervalSinceReferenceDateValue;
- (unsigned long long)hash;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nameComponents;
- (bool)readFrom:(id)arg1;
- (void)setArrayOfStringsValues:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntegerValue:(bool)arg1;
- (void)setHasTimeIntervalSinceReferenceDateValue:(bool)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTimeIntervalSinceReferenceDateValue:(double)arg1;
- (id)stringValue;
- (double)timeIntervalSinceReferenceDateValue;
- (void)writeTo:(id)arg1;

@end
