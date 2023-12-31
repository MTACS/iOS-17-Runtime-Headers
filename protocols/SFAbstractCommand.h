
@protocol SFAbstractCommand <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setType:(int)arg1;
- (void)setValue:(SFCommandValue *)arg1;
- (int)type;
- (SFCommandValue *)value;

@end
