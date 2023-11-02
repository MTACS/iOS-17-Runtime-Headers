
@interface GEORPButton : PBCodable <NSCopying> {
    int  _buttonAction;
    struct { 
        unsigned int has_buttonAction : 1; 
    }  _flags;
    NSString * _localizedText;
}

@property (nonatomic) int buttonAction;
@property (nonatomic) bool hasButtonAction;
@property (nonatomic, readonly) bool hasLocalizedText;
@property (nonatomic, retain) NSString *localizedText;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsButtonAction:(id)arg1;
- (int)buttonAction;
- (id)buttonActionAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasButtonAction;
- (bool)hasLocalizedText;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localizedText;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setButtonAction:(int)arg1;
- (void)setHasButtonAction:(bool)arg1;
- (void)setLocalizedText:(id)arg1;
- (void)writeTo:(id)arg1;

@end
