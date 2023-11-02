
@protocol RFImageElement <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setSources:(NSArray *)arg1;
- (NSArray *)sources;

@end
