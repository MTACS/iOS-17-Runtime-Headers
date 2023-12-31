
@protocol VSAuthenticationToken <NSObject>

@required

- (NSString *)body;
- (NSDate *)expirationDate;
- (id)initWithSerializedData:(NSData *)arg1;
- (bool)isFromUnsupportedProvider;
- (bool)isOpaque;
- (bool)isValid;
- (NSData *)serializedData;
- (void)setBody:(NSString *)arg1;

@end
