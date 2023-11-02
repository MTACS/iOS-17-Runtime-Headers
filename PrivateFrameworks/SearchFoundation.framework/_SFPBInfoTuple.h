
@interface _SFPBInfoTuple : PBCodable <NSSecureCoding, _SFPBInfoTuple> {
    unsigned int  _initiallyVisibleValues;
    NSString * _key;
    NSString * _showMoreString;
    NSArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int initiallyVisibleValues;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *showMoreString;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *values;

- (void).cxx_destruct;
- (void)addValues:(id)arg1;
- (void)clearValues;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (unsigned int)initiallyVisibleValues;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)key;
- (bool)readFrom:(id)arg1;
- (void)setInitiallyVisibleValues:(unsigned int)arg1;
- (void)setKey:(id)arg1;
- (void)setShowMoreString:(id)arg1;
- (void)setValues:(id)arg1;
- (id)showMoreString;
- (id)values;
- (id)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
