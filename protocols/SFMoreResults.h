
@protocol SFMoreResults <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)label;
- (void)setLabel:(NSString *)arg1;

@end
