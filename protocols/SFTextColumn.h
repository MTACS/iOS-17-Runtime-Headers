
@protocol SFTextColumn <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSArray *)sections;
- (void)setSections:(NSArray *)arg1;

@end