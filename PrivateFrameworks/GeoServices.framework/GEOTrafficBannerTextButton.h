
@interface GEOTrafficBannerTextButton : PBCodable <NSCopying> {
    int  _action;
    int  _buttonDisplay;
    struct { 
        unsigned int has_action : 1; 
        unsigned int has_buttonDisplay : 1; 
    }  _flags;
    GEOFormattedString * _text;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int action;
@property (nonatomic) int buttonDisplay;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hasButtonDisplay;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, retain) GEOFormattedString *text;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAction:(id)arg1;
- (int)StringAsButtonDisplay:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (int)buttonDisplay;
- (id)buttonDisplayAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasButtonDisplay;
- (bool)hasText;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setButtonDisplay:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasButtonDisplay:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
