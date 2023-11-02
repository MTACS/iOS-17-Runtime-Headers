
@protocol SFTableRowCardSection <SFCardSection>

@required

- (bool)alignRowsToHeader;
- (SFTableAlignmentSchema *)alignmentSchema;
- (NSArray *)data;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isSubHeader;
- (NSData *)jsonData;
- (bool)reducedRowHeight;
- (NSArray *)richData;
- (void)setAlignRowsToHeader:(bool)arg1;
- (void)setAlignmentSchema:(SFTableAlignmentSchema *)arg1;
- (void)setData:(NSArray *)arg1;
- (void)setIsSubHeader:(bool)arg1;
- (void)setReducedRowHeight:(bool)arg1;
- (void)setRichData:(NSArray *)arg1;
- (void)setTabGroupIdentifier:(NSString *)arg1;
- (void)setTableIdentifier:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setVerticalAlign:(int)arg1;
- (NSString *)tabGroupIdentifier;
- (NSString *)tableIdentifier;
- (NSString *)type;
- (int)verticalAlign;

@end
