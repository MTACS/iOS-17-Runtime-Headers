
@interface _INPBDistanceList : PBCodable <NSCopying, NSSecureCoding, _INPBDistanceList> {
    _INPBCondition * _condition;
    NSArray * _distances;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *distances;
@property (nonatomic, readonly) unsigned long long distancesCount;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)distanceType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDistance:(id)arg1;
- (void)clearDistances;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)distanceAtIndex:(unsigned long long)arg1;
- (id)distances;
- (unsigned long long)distancesCount;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCondition;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setDistances:(id)arg1;
- (void)writeTo:(id)arg1;

@end
