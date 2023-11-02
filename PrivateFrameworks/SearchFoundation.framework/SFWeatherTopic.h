
@interface SFWeatherTopic : SFQueryTopic <SFWeatherTopic> {
    SFLatLng * _location;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) SFLatLng *location;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly) int queryType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1 location:(id)arg2;
- (id)initWithQuery:(id)arg1 location:(id)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;

@end
