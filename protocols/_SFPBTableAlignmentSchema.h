
@protocol _SFPBTableAlignmentSchema <NSObject>

@required

- (void)addTableColumnAlignment:(_SFPBTableColumnAlignment *)arg1;
- (void)clearTableColumnAlignment;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBStringDictionary *)metadata;
- (void)setMetadata:(_SFPBStringDictionary *)arg1;
- (void)setTableColumnAlignments:(NSArray *)arg1;
- (_SFPBTableColumnAlignment *)tableColumnAlignmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)tableColumnAlignmentCount;
- (NSArray *)tableColumnAlignments;

@end
