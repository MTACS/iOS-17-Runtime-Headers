
@interface INSpatialEventTrigger : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _event;
    long long  _mobileSpace;
    CLPlacemark * _placemark;
    NSArray * _suggestedValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long event;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mobileSpace;
@property (nonatomic, readonly, copy) CLPlacemark *placemark;
@property (nonatomic, readonly, copy) NSArray *suggestedValues;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)event;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMobileSpace:(long long)arg1 event:(long long)arg2;
- (id)initWithPlacemark:(id)arg1 event:(long long)arg2;
- (id)initWithPlacemark:(id)arg1 event:(long long)arg2 suggestedValues:(id)arg3 mobileSpace:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (long long)mobileSpace;
- (id)placemark;
- (id)suggestedValues;

@end
