
@interface GEOBrandInfoMapping : PBCodable <NSCopying> {
    struct { 
        unsigned int has_globalBrandId : 1; 
        unsigned int read_isSuggesteds : 1; 
        unsigned int read_isoCountryCodes : 1; 
        unsigned int read_scopedBrandInfos : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _globalBrandId;
    struct { 
        bool *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _isSuggesteds;
    NSMutableArray * _isoCountryCodes;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _scopedBrandInfos;
}

@property (nonatomic) unsigned long long globalBrandId;
@property (nonatomic) bool hasGlobalBrandId;
@property (nonatomic, readonly) bool*isSuggesteds;
@property (nonatomic, readonly) unsigned long long isSuggestedsCount;
@property (nonatomic, retain) NSMutableArray *isoCountryCodes;
@property (nonatomic, retain) NSMutableArray *scopedBrandInfos;

+ (bool)isValid:(id)arg1;
+ (Class)isoCountryCodeType;
+ (Class)scopedBrandInfoType;

- (void).cxx_destruct;
- (void)addIsSuggested:(bool)arg1;
- (void)addIsoCountryCode:(id)arg1;
- (void)addScopedBrandInfo:(id)arg1;
- (void)clearIsSuggesteds;
- (void)clearIsoCountryCodes;
- (void)clearScopedBrandInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)globalBrandId;
- (bool)hasGlobalBrandId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSuggestedAtIndex:(unsigned long long)arg1;
- (bool*)isSuggesteds;
- (unsigned long long)isSuggestedsCount;
- (id)isoCountryCodeAtIndex:(unsigned long long)arg1;
- (id)isoCountryCodes;
- (unsigned long long)isoCountryCodesCount;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)scopedBrandInfoAtIndex:(unsigned long long)arg1;
- (id)scopedBrandInfos;
- (unsigned long long)scopedBrandInfosCount;
- (void)setGlobalBrandId:(unsigned long long)arg1;
- (void)setHasGlobalBrandId:(bool)arg1;
- (void)setIsSuggesteds:(bool*)arg1 count:(unsigned long long)arg2;
- (void)setIsoCountryCodes:(id)arg1;
- (void)setScopedBrandInfos:(id)arg1;
- (void)writeTo:(id)arg1;

@end
