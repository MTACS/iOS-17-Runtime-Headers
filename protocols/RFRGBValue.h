
@protocol RFRGBValue <NSObject>

@required

- (NSNumber *)blue;
- (NSDictionary *)dictionaryRepresentation;
- (NSNumber *)green;
- (NSData *)jsonData;
- (NSNumber *)red;
- (void)setBlue:(NSNumber *)arg1;
- (void)setGreen:(NSNumber *)arg1;
- (void)setRed:(NSNumber *)arg1;

@end
