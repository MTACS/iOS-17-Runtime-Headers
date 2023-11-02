
@interface _INPBGeographicalFeatureList : PBCodable <NSCopying, NSSecureCoding, _INPBGeographicalFeatureList> {
    _INPBCondition * _condition;
    NSArray * _geographicalFeatures;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *geographicalFeatures;
@property (nonatomic, readonly) unsigned long long geographicalFeaturesCount;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)geographicalFeatureType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addGeographicalFeature:(id)arg1;
- (void)clearGeographicalFeatures;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)geographicalFeatureAtIndex:(unsigned long long)arg1;
- (id)geographicalFeatures;
- (unsigned long long)geographicalFeaturesCount;
- (bool)hasCondition;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setGeographicalFeatures:(id)arg1;
- (void)writeTo:(id)arg1;

@end
