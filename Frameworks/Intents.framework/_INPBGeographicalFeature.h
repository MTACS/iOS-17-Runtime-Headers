
@interface _INPBGeographicalFeature : PBCodable <NSCopying, NSSecureCoding, _INPBGeographicalFeature> {
    NSArray * _geographicalFeatureDescriptors;
    _INPBString * _geographicalFeatureType;
    struct { }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *geographicalFeatureDescriptors;
@property (nonatomic, readonly) unsigned long long geographicalFeatureDescriptorsCount;
@property (nonatomic, retain) _INPBString *geographicalFeatureType;
@property (nonatomic, readonly) bool hasGeographicalFeatureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)geographicalFeatureDescriptorsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addGeographicalFeatureDescriptors:(id)arg1;
- (void)clearGeographicalFeatureDescriptors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)geographicalFeatureDescriptors;
- (id)geographicalFeatureDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)geographicalFeatureDescriptorsCount;
- (id)geographicalFeatureType;
- (bool)hasGeographicalFeatureType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGeographicalFeatureDescriptors:(id)arg1;
- (void)setGeographicalFeatureType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
