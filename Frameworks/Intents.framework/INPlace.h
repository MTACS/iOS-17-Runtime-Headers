
@interface INPlace : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _personalPlaceType;
    NSArray * _placeDescriptors;
    NSString * _placeSubType;
    NSString * _placeType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long personalPlaceType;
@property (nonatomic, readonly, copy) NSArray *placeDescriptors;
@property (nonatomic, readonly, copy) NSString *placeSubType;
@property (nonatomic, readonly, copy) NSString *placeType;
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
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaceType:(id)arg1 placeSubType:(id)arg2 placeDescriptors:(id)arg3 personalPlaceType:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (long long)personalPlaceType;
- (id)placeDescriptors;
- (id)placeSubType;
- (id)placeType;

@end
