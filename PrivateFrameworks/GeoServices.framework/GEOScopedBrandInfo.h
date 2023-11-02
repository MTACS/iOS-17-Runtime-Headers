
@interface GEOScopedBrandInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int read_isoCountryCode : 1; 
        unsigned int read_localizedNames : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _isoCountryCode;
    NSMutableArray * _localizedNames;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) bool hasIsoCountryCode;
@property (nonatomic, retain) NSString *isoCountryCode;
@property (nonatomic, retain) NSMutableArray *localizedNames;

+ (bool)isValid:(id)arg1;
+ (Class)localizedNameType;

- (void).cxx_destruct;
- (void)addLocalizedName:(id)arg1;
- (void)clearLocalizedNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsoCountryCode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)isoCountryCode;
- (id)jsonRepresentation;
- (id)localizedNameAtIndex:(unsigned long long)arg1;
- (id)localizedNames;
- (unsigned long long)localizedNamesCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setLocalizedNames:(id)arg1;
- (void)writeTo:(id)arg1;

@end
