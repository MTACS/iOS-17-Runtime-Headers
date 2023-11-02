
@protocol RFOptionalFloat <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setValue:(NSNumber *)arg1;
- (NSNumber *)value;

@end
