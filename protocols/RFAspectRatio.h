
@protocol RFAspectRatio <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSNumber *)height;
- (NSData *)jsonData;
- (void)setHeight:(NSNumber *)arg1;
- (void)setWidth:(NSNumber *)arg1;
- (NSNumber *)width;

@end
