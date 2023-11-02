
@interface GEOPDSearchQuerySynonymMetadata : PBCodable <NSCopying> {
    float  _confidence;
    NSString * _countryCode;
    NSMutableArray * _featureMaps;
    struct { 
        unsigned int has_identifier : 1; 
        unsigned int has_confidence : 1; 
        unsigned int has_originalProvider : 1; 
        unsigned int has_rewriteProvider : 1; 
        unsigned int has_hardRewrite : 1; 
        unsigned int has_isOrgQueryPrefixOfRefinement : 1; 
        unsigned int has_isWeakLexicalMatch : 1; 
        unsigned int has_useGeoHashes : 1; 
        unsigned int read_countryCode : 1; 
        unsigned int read_featureMaps : 1; 
        unsigned int read_geoHashes : 1; 
        unsigned int read_key : 1; 
        unsigned int read_language : 1; 
        unsigned int read_originalQueryDisplayString : 1; 
        unsigned int read_refinementQueries : 1; 
        unsigned int read_synonymQueryDisplayString : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _geoHashes;
    bool  _hardRewrite;
    unsigned long long  _identifier;
    bool  _isOrgQueryPrefixOfRefinement;
    bool  _isWeakLexicalMatch;
    NSString * _key;
    NSString * _language;
    int  _originalProvider;
    NSString * _originalQueryDisplayString;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _refinementQueries;
    int  _rewriteProvider;
    NSString * _synonymQueryDisplayString;
    bool  _useGeoHashes;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
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
