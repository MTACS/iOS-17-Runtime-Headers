
@protocol RFTextEncapsulation <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setStyle:(int)arg1;
- (int)style;

@end
