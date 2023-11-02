
@interface TRIMetric : PBCodable <NSCopying> {
    NSString * _categoricalValue;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int integerValue : 1; 
    }  _has;
    long long  _integerValue;
    NSString * _name;
    NSData * _userDefinedValue;
}

@property (nonatomic, retain) NSString *categoricalValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) bool hasCategoricalValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntegerValue;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasUserDefinedValue;
@property (nonatomic) long long integerValue;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSData *userDefinedValue;

+ (id)metricWithName:(id)arg1;
+ (id)metricWithName:(id)arg1 categoricalValue:(id)arg2;
+ (id)metricWithName:(id)arg1 doubleValue:(double)arg2;
+ (id)metricWithName:(id)arg1 integerValue:(long long)arg2;
+ (id)metricWithName:(id)arg1 userDefinedValue:(id)arg2;

- (void).cxx_destruct;
- (id)categoricalValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasCategoricalValue;
- (bool)hasDoubleValue;
- (bool)hasIntegerValue;
- (bool)hasName;
- (bool)hasUserDefinedValue;
- (unsigned long long)hash;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setCategoricalValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntegerValue:(bool)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setUserDefinedValue:(id)arg1;
- (id)userDefinedValue;
- (void)writeTo:(id)arg1;

@end
