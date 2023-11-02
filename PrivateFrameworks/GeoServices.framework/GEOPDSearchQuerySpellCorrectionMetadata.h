
@interface GEOPDSearchQuerySpellCorrectionMetadata : PBCodable <NSCopying> {
    NSMutableArray * _allSpellSuggestions;
    NSMutableArray * _allTokenCandidates;
    unsigned long long  _decileId;
    struct { 
        unsigned int has_decileId : 1; 
        unsigned int has_misspellScore : 1; 
        unsigned int has_modelNumberMajor : 1; 
        unsigned int has_modelNumberMinor : 1; 
        unsigned int has_resultStatus : 1; 
        unsigned int has_spellerRankerModelType : 1; 
        unsigned int has_isFromDLCacheModel : 1; 
        unsigned int has_isFromDLRuntimeModel : 1; 
        unsigned int has_isConfidentSpellCorrection : 1; 
        unsigned int has_isFromPoiSearchSpeller : 1; 
        unsigned int has_isSpellCorrectionSameAsOrgQuery : 1; 
        unsigned int read_allSpellSuggestions : 1; 
        unsigned int read_allTokenCandidates : 1; 
        unsigned int read_spellSuggestion : 1; 
        unsigned int read_tokenCandidates : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isConfidentSpellCorrection;
    bool  _isFromDLCacheModel;
    bool  _isFromDLRuntimeModel;
    bool  _isFromPoiSearchSpeller;
    bool  _isSpellCorrectionSameAsOrgQuery;
    double  _misspellScore;
    unsigned int  _modelNumberMajor;
    unsigned int  _modelNumberMinor;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _resultStatus;
    GEOPDSearchSpellSuggestion * _spellSuggestion;
    int  _spellerRankerModelType;
    NSMutableArray * _tokenCandidates;
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
