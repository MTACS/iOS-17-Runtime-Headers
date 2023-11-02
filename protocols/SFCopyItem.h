
@protocol SFCopyItem <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;

@end
