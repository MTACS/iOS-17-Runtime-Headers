
@protocol SFTextColumnsCardSection <SFCardSection>

@required

- (NSArray *)columns;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setColumns:(NSArray *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTitleWeight:(unsigned long long)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)title;
- (unsigned long long)titleWeight;
- (NSString *)type;

@end
