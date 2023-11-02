
@interface GEORPNotification : PBCodable <NSCopying> {
    struct { 
        unsigned int read_localizedText : 1; 
        unsigned int read_localizedTitle : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _localizedText;
    NSString * _localizedTitle;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) bool hasLocalizedText;
@property (nonatomic, readonly) bool hasLocalizedTitle;
@property (nonatomic, retain) NSString *localizedText;
@property (nonatomic, retain) NSString *localizedTitle;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocalizedText;
- (bool)hasLocalizedTitle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localizedText;
- (id)localizedTitle;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocalizedText:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)writeTo:(id)arg1;

@end
