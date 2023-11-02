
@interface GEOLocalizedPublisherAttribution : PBCodable <NSCopying> {
    NSString * _displayName;
    struct { 
        unsigned int has_iconIdentifier : 1; 
        unsigned int has_logoCenteredColorizedIdentifier : 1; 
        unsigned int has_logoCenteredIdentifier : 1; 
        unsigned int has_logoIdentifier : 1; 
        unsigned int has_logoWithoutPaddingIdentifier : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_language : 1; 
        unsigned int read_subtitle : 1; 
        unsigned int read_themeColorDarkMode : 1; 
        unsigned int read_themeColorLightMode : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _iconIdentifier;
    NSString * _language;
    unsigned int  _logoCenteredColorizedIdentifier;
    unsigned int  _logoCenteredIdentifier;
    unsigned int  _logoIdentifier;
    unsigned int  _logoWithoutPaddingIdentifier;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _subtitle;
    NSString * _themeColorDarkMode;
    NSString * _themeColorLightMode;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasIconIdentifier;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic) bool hasLogoCenteredColorizedIdentifier;
@property (nonatomic) bool hasLogoCenteredIdentifier;
@property (nonatomic) bool hasLogoIdentifier;
@property (nonatomic) bool hasLogoWithoutPaddingIdentifier;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasThemeColorDarkMode;
@property (nonatomic, readonly) bool hasThemeColorLightMode;
@property (nonatomic) unsigned int iconIdentifier;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) unsigned int logoCenteredColorizedIdentifier;
@property (nonatomic) unsigned int logoCenteredIdentifier;
@property (nonatomic) unsigned int logoIdentifier;
@property (nonatomic) unsigned int logoWithoutPaddingIdentifier;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *themeColorDarkMode;
@property (nonatomic, retain) NSString *themeColorLightMode;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDisplayName;
- (bool)hasIconIdentifier;
- (bool)hasLanguage;
- (bool)hasLogoCenteredColorizedIdentifier;
- (bool)hasLogoCenteredIdentifier;
- (bool)hasLogoIdentifier;
- (bool)hasLogoWithoutPaddingIdentifier;
- (bool)hasSubtitle;
- (bool)hasThemeColorDarkMode;
- (bool)hasThemeColorLightMode;
- (unsigned long long)hash;
- (unsigned int)iconIdentifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)language;
- (unsigned int)logoCenteredColorizedIdentifier;
- (unsigned int)logoCenteredIdentifier;
- (unsigned int)logoIdentifier;
- (unsigned int)logoWithoutPaddingIdentifier;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasIconIdentifier:(bool)arg1;
- (void)setHasLogoCenteredColorizedIdentifier:(bool)arg1;
- (void)setHasLogoCenteredIdentifier:(bool)arg1;
- (void)setHasLogoIdentifier:(bool)arg1;
- (void)setHasLogoWithoutPaddingIdentifier:(bool)arg1;
- (void)setIconIdentifier:(unsigned int)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLogoCenteredColorizedIdentifier:(unsigned int)arg1;
- (void)setLogoCenteredIdentifier:(unsigned int)arg1;
- (void)setLogoIdentifier:(unsigned int)arg1;
- (void)setLogoWithoutPaddingIdentifier:(unsigned int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThemeColorDarkMode:(id)arg1;
- (void)setThemeColorLightMode:(id)arg1;
- (id)subtitle;
- (id)themeColorDarkMode;
- (id)themeColorLightMode;
- (void)writeTo:(id)arg1;

@end
