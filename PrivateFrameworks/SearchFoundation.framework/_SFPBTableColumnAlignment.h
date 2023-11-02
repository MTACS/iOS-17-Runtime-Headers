
@interface _SFPBTableColumnAlignment : PBCodable <NSSecureCoding, _SFPBTableColumnAlignment> {
    int  _columnAlignment;
    int  _dataAlignment;
    bool  _isEqualWidth;
}

@property (nonatomic) int columnAlignment;
@property (nonatomic) int dataAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEqualWidth;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (int)columnAlignment;
- (int)dataAlignment;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualWidth;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setColumnAlignment:(int)arg1;
- (void)setDataAlignment:(int)arg1;
- (void)setIsEqualWidth:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
