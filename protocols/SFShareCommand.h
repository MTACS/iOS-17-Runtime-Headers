
@protocol SFShareCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setShareItem:(SFShareItem *)arg1;
- (SFShareItem *)shareItem;

@end
