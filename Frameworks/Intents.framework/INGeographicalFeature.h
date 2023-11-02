
@interface INGeographicalFeature : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSArray * _geographicalFeatureDescriptors;
    NSString * _geographicalFeatureType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *geographicalFeatureDescriptors;
@property (nonatomic, readonly, copy) NSString *geographicalFeatureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)geographicalFeatureDescriptors;
- (id)geographicalFeatureType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeographicalFeatureType:(id)arg1 geographicalFeatureDescriptors:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
