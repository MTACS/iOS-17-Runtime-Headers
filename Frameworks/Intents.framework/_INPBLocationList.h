
@interface _INPBLocationList : PBCodable <NSCopying, NSSecureCoding, _INPBLocationList> {
    _INPBCondition * _condition;
    struct { }  _has;
    NSArray * _locations;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *locations;
@property (nonatomic, readonly) unsigned long long locationsCount;
@property (readonly) Class superclass;

+ (Class)locationType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCondition;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)locations;
- (unsigned long long)locationsCount;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)writeTo:(id)arg1;

@end
