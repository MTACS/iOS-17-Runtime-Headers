
@interface _INPBTemperatureList : PBCodable <NSCopying, NSSecureCoding, _INPBTemperatureList> {
    _INPBCondition * _condition;
    struct { }  _has;
    NSArray * _temperatures;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *temperatures;
@property (nonatomic, readonly) unsigned long long temperaturesCount;

+ (bool)supportsSecureCoding;
+ (Class)temperatureType;

- (void).cxx_destruct;
- (void)addTemperature:(id)arg1;
- (void)clearTemperatures;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCondition;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setTemperatures:(id)arg1;
- (id)temperatureAtIndex:(unsigned long long)arg1;
- (id)temperatures;
- (unsigned long long)temperaturesCount;
- (void)writeTo:(id)arg1;

@end
