
@protocol SFTableColumnAlignment <NSObject>

@required

- (int)columnAlignment;
- (int)dataAlignment;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isEqualWidth;
- (NSData *)jsonData;
- (void)setColumnAlignment:(int)arg1;
- (void)setDataAlignment:(int)arg1;
- (void)setIsEqualWidth:(bool)arg1;

@end
