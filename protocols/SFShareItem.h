
@protocol SFShareItem <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;

@end
