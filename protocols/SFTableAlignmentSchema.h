
@protocol SFTableAlignmentSchema <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSDictionary *)metadata;
- (void)setMetadata:(NSDictionary *)arg1;
- (void)setTableColumnAlignment:(NSArray *)arg1;
- (NSArray *)tableColumnAlignment;

@end
