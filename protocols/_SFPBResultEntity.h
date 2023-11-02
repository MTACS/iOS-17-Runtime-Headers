
@protocol _SFPBResultEntity <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBLocationTypeInfo *)location_type_info;
- (NSString *)maps_encrypted_muid;
- (NSString *)name;
- (void)setLocation_type_info:(_SFPBLocationTypeInfo *)arg1;
- (void)setMaps_encrypted_muid:(NSString *)arg1;
- (void)setName:(NSString *)arg1;

@end
