
@interface WFTimeZoneDescriptor : MTLModel <MTLJSONSerializing, NSCopying, NSSecureCoding> {
    NSNumber * _alCityIdentifier;
    NSString * _localizedCityName;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly, copy) NSNumber *alCityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedCityName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)JSONKeyPathsByPropertyKey;
+ (bool)supportsSecureCoding;
+ (id)timeZoneJSONTransformer;

- (void).cxx_destruct;
- (id)alCityIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithALCity:(id)arg1;
- (id)initWithTimeZone:(id)arg1 localizedCityName:(id)arg2 alCityIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedCityName;
- (id)timeZone;

@end
