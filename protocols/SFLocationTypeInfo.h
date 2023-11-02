
@protocol SFLocationTypeInfo <NSObject>

@required

- (NSString *)address;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setAddress:(NSString *)arg1;

@end
