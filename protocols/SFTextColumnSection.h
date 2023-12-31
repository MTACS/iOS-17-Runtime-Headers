
@protocol SFTextColumnSection <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setTextLines:(NSArray *)arg1;
- (void)setTextNoWrap:(bool)arg1;
- (void)setTextWeight:(unsigned long long)arg1;
- (NSArray *)textLines;
- (bool)textNoWrap;
- (unsigned long long)textWeight;

@end
