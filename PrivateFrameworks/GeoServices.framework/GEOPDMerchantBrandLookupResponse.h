
@interface GEOPDMerchantBrandLookupResponse : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _abstractOfBrandMuids;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _childBrandMuids;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_relatedGlobalBrandMuid : 1; 
        unsigned int has_isPrimaryVariant : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_abstractOfBrandMuids : 1; 
        unsigned int read_childBrandMuids : 1; 
        unsigned int read_variantBrandMuids : 1; 
        unsigned int read_geoHashs : 1; 
        unsigned int read_scope : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _geoHashs;
    bool  _isPrimaryVariant;
    unsigned long long  _muid;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _relatedGlobalBrandMuid;
    NSString * _scope;
    PBUnknownFields * _unknownFields;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _variantBrandMuids;
}

@property (nonatomic, readonly) unsigned long long*abstractOfBrandMuids;
@property (nonatomic, readonly) unsigned long long abstractOfBrandMuidsCount;
@property (nonatomic, readonly) unsigned long long*childBrandMuids;
@property (nonatomic, readonly) unsigned long long childBrandMuidsCount;
@property (nonatomic, retain) NSMutableArray *geoHashs;
@property (nonatomic) bool hasIsPrimaryVariant;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasRelatedGlobalBrandMuid;
@property (nonatomic, readonly) bool hasScope;
@property (nonatomic) bool isPrimaryVariant;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) unsigned long long relatedGlobalBrandMuid;
@property (nonatomic, retain) NSString *scope;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readonly) unsigned long long*variantBrandMuids;
@property (nonatomic, readonly) unsigned long long variantBrandMuidsCount;

+ (Class)geoHashType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)abstractOfBrandMuidAtIndex:(unsigned long long)arg1;
- (unsigned long long*)abstractOfBrandMuids;
- (unsigned long long)abstractOfBrandMuidsCount;
- (void)addAbstractOfBrandMuid:(unsigned long long)arg1;
- (void)addChildBrandMuid:(unsigned long long)arg1;
- (void)addGeoHash:(id)arg1;
- (void)addVariantBrandMuid:(unsigned long long)arg1;
- (unsigned long long)childBrandMuidAtIndex:(unsigned long long)arg1;
- (unsigned long long*)childBrandMuids;
- (unsigned long long)childBrandMuidsCount;
- (void)clearAbstractOfBrandMuids;
- (void)clearChildBrandMuids;
- (void)clearGeoHashs;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearVariantBrandMuids;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoHashAtIndex:(unsigned long long)arg1;
- (id)geoHashs;
- (unsigned long long)geoHashsCount;
- (bool)hasIsPrimaryVariant;
- (bool)hasMuid;
- (bool)hasRelatedGlobalBrandMuid;
- (bool)hasScope;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPrimaryVariant;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)relatedGlobalBrandMuid;
- (id)scope;
- (void)setAbstractOfBrandMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setChildBrandMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setGeoHashs:(id)arg1;
- (void)setHasIsPrimaryVariant:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasRelatedGlobalBrandMuid:(bool)arg1;
- (void)setIsPrimaryVariant:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setRelatedGlobalBrandMuid:(unsigned long long)arg1;
- (void)setScope:(id)arg1;
- (void)setVariantBrandMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (unsigned long long)variantBrandMuidAtIndex:(unsigned long long)arg1;
- (unsigned long long*)variantBrandMuids;
- (unsigned long long)variantBrandMuidsCount;
- (void)writeTo:(id)arg1;

@end
