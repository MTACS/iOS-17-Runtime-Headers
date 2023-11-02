
@protocol SFResultEntity <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFLocationTypeInfo *)location_type_info;
- (NSString *)maps_encrypted_muid;
- (NSString *)name;
- (void)setLocation_type_info:(SFLocationTypeInfo *)arg1;
- (void)setMaps_encrypted_muid:(NSString *)arg1;
- (void)setName:(NSString *)arg1;

@end
