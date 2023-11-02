
@interface GEOLogMsgStateMapUI : PBCodable <NSCopying> {
    struct { 
        unsigned int has_layoutInfo : 1; 
        unsigned int has_layoutStyle : 1; 
        unsigned int has_numberOfMapsWindows : 1; 
        unsigned int has_windowSize : 1; 
        unsigned int has_landscape : 1; 
    }  _flags;
    bool  _landscape;
    int  _layoutInfo;
    int  _layoutStyle;
    GEOMultiTabsState * _multiTabsState;
    unsigned int  _numberOfMapsWindows;
    int  _windowSize;
}

@property (nonatomic) bool hasLandscape;
@property (nonatomic) bool hasLayoutInfo;
@property (nonatomic) bool hasLayoutStyle;
@property (nonatomic, readonly) bool hasMultiTabsState;
@property (nonatomic) bool hasNumberOfMapsWindows;
@property (nonatomic) bool hasWindowSize;
@property (nonatomic) bool landscape;
@property (nonatomic) int layoutInfo;
@property (nonatomic) int layoutStyle;
@property (nonatomic, retain) GEOMultiTabsState *multiTabsState;
@property (nonatomic) unsigned int numberOfMapsWindows;
@property (nonatomic) int windowSize;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLayoutInfo:(id)arg1;
- (int)StringAsLayoutStyle:(id)arg1;
- (int)StringAsWindowSize:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLandscape;
- (bool)hasLayoutInfo;
- (bool)hasLayoutStyle;
- (bool)hasMultiTabsState;
- (bool)hasNumberOfMapsWindows;
- (bool)hasWindowSize;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)landscape;
- (int)layoutInfo;
- (id)layoutInfoAsString:(int)arg1;
- (int)layoutStyle;
- (id)layoutStyleAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)multiTabsState;
- (unsigned int)numberOfMapsWindows;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLandscape:(bool)arg1;
- (void)setHasLayoutInfo:(bool)arg1;
- (void)setHasLayoutStyle:(bool)arg1;
- (void)setHasNumberOfMapsWindows:(bool)arg1;
- (void)setHasWindowSize:(bool)arg1;
- (void)setLandscape:(bool)arg1;
- (void)setLayoutInfo:(int)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setMultiTabsState:(id)arg1;
- (void)setNumberOfMapsWindows:(unsigned int)arg1;
- (void)setWindowSize:(int)arg1;
- (int)windowSize;
- (id)windowSizeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
