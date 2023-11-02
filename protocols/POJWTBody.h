
@protocol POJWTBody <NSObject>

@required

- (NSDictionary *)allData;
- (NSData *)dataRepresentation;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJWTData:(NSData *)arg1;
- (id)mutableCopy;

@end
