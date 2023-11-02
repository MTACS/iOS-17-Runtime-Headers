
@protocol NTKArgonJSONEncodable <NSObject>

@required

- (NSDictionary *)argon_JSONRepresentation;
- (id)argon_initWithJSONRepresentation:(NSDictionary *)arg1;

@end
