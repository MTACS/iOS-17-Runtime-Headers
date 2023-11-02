
@protocol _SFPBTableColumnAlignment <NSObject>

@required

- (int)columnAlignment;
- (int)dataAlignment;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isEqualWidth;
- (NSData *)jsonData;
- (void)setColumnAlignment:(int)arg1;
- (void)setDataAlignment:(int)arg1;
- (void)setIsEqualWidth:(bool)arg1;

@end
