
@interface _SFPBTableAlignmentSchema : PBCodable <NSSecureCoding, _SFPBTableAlignmentSchema> {
    _SFPBStringDictionary * _metadata;
    NSArray * _tableColumnAlignments;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBStringDictionary *metadata;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *tableColumnAlignments;

- (void).cxx_destruct;
- (void)addTableColumnAlignment:(id)arg1;
- (void)clearTableColumnAlignment;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTableColumnAlignment:(id)arg1;
- (void)setTableColumnAlignments:(id)arg1;
- (id)tableColumnAlignmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)tableColumnAlignmentCount;
- (id)tableColumnAlignments;
- (void)writeTo:(id)arg1;

@end