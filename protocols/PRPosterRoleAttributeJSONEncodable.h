
@protocol PRPosterRoleAttributeJSONEncodable <NSObject>

@required

+ (id)decodeObjectWithJSON:(NSData *)arg1;

- (NSData *)encodeJSON;

@end
