
@interface _SFPBSymbolImage : PBCodable <NSSecureCoding, _SFPBSymbolImage> {
    int  _backgroundColor;
    int  _primaryColor;
    bool  _punchThroughBackground;
    int  _secondaryColor;
    NSString * _symbolName;
}

@property (nonatomic) int backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int primaryColor;
@property (nonatomic) bool punchThroughBackground;
@property (nonatomic) int secondaryColor;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *symbolName;

- (void).cxx_destruct;
- (int)backgroundColor;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)primaryColor;
- (bool)punchThroughBackground;
- (bool)readFrom:(id)arg1;
- (int)secondaryColor;
- (void)setBackgroundColor:(int)arg1;
- (void)setPrimaryColor:(int)arg1;
- (void)setPunchThroughBackground:(bool)arg1;
- (void)setSecondaryColor:(int)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;
- (void)writeTo:(id)arg1;

@end
