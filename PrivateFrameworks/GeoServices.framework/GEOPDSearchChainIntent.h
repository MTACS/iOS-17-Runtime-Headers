
@interface GEOPDSearchChainIntent : PBCodable <NSCopying> {
    unsigned long long  _brandMuid;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _brandMuids;
    NSMutableArray * _brandRelationshipInfos;
    NSMutableArray * _categoryIds;
    NSString * _chainId;
    NSMutableArray * _featureMaps;
    struct { 
        unsigned int has_brandMuid : 1; 
        unsigned int has_isChainInSameCountry : 1; 
        unsigned int has_isLocalChain : 1; 
        unsigned int has_isFromBrandProfile : 1; 
        unsigned int read_brandMuids : 1; 
        unsigned int read_brandRelationshipInfos : 1; 
        unsigned int read_categoryIds : 1; 
        unsigned int read_chainId : 1; 
        unsigned int read_featureMaps : 1; 
        unsigned int read_geminiBrand : 1; 
        unsigned int read_prefCategoryIds : 1; 
        unsigned int read_relatedBrands : 1; 
        unsigned int read_tokenSet : 1; 
        unsigned int read_trigger : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _geminiBrand;
    bool  _isChainInSameCountry;
    bool  _isFromBrandProfile;
    bool  _isLocalChain;
    NSMutableArray * _prefCategoryIds;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _relatedBrands;
    GEOPDSearchTokenSet * _tokenSet;
    NSString * _trigger;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
