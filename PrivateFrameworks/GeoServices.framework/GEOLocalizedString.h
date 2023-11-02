
@interface GEOLocalizedString : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_locale : 1; 
        unsigned int read_stringValue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _locale;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _stringValue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)bestLocalizedString:(id)arg1 forPreferredLanguages:(id)arg2 fallbackToFirstAvailable:(bool)arg3;
+ (id)bestLocalizedStringForCurrentLocale:(id)arg1 fallbackToFirstAvailable:(bool)arg2;
+ (id)bestString:(id)arg1 forPreferredLanguages:(id)arg2 fallbackToFirstAvailable:(bool)arg3;
+ (id)bestStringForCurrentLocale:(id)arg1 fallbackToFirstAvailable:(bool)arg2;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
