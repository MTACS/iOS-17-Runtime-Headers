
@interface GEOPDSearchQueryIntentMetadata : PBCodable <NSCopying> {
    GEOPDSearchACHintMetadata * _acHintMetadata;
    struct { 
        unsigned int has_queryIntentWeight : 1; 
        unsigned int has_rewrittenQueryIndex : 1; 
        unsigned int has_isFromDefinitiveQu : 1; 
        unsigned int has_isFromKnowledgeGraph : 1; 
        unsigned int has_isFromSearchQu : 1; 
        unsigned int read_intentSources : 1; 
        unsigned int read_rewrittenQueryTypes : 1; 
        unsigned int read_acHintMetadata : 1; 
        unsigned int read_geoTokenImportanceMetadata : 1; 
        unsigned int read_originalQuery : 1; 
        unsigned int read_queryClassificationMetadatas : 1; 
        unsigned int read_queryCompletionMetadata : 1; 
        unsigned int read_queryDirectionsIntentMetadata : 1; 
        unsigned int read_queryDymMetadata : 1; 
        unsigned int read_queryEmbeddingMetadatas : 1; 
        unsigned int read_queryFuzzyMatchV2Metadata : 1; 
        unsigned int read_queryGeoMetadata : 1; 
        unsigned int read_queryGeoNormalizerMetadata : 1; 
        unsigned int read_queryGeoTagMetadata : 1; 
        unsigned int read_queryInterpretationMetadata : 1; 
        unsigned int read_queryNeuralRewriteMetadata : 1; 
        unsigned int read_queryNormalizerMetadata : 1; 
        unsigned int read_queryPoiMetadata : 1; 
        unsigned int read_querySpellCorrectionMetadata : 1; 
        unsigned int read_querySynonymMetadata : 1; 
        unsigned int read_queryTagMetadata : 1; 
        unsigned int read_queryTokenImportanceMetadata : 1; 
        unsigned int read_queryTokenizerMetadata : 1; 
        unsigned int read_queryTransliterMetadata : 1; 
        unsigned int read_rawQueryTokenizerMetadata : 1; 
        unsigned int read_rewrittenQuery : 1; 
        unsigned int read_richBrandMetadata : 1; 
        unsigned int read_tokenSynonymMetadata : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDSearchQueryTokenImportanceMetadata * _geoTokenImportanceMetadata;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _intentSources;
    bool  _isFromDefinitiveQu;
    bool  _isFromKnowledgeGraph;
    bool  _isFromSearchQu;
    NSString * _originalQuery;
    NSMutableArray * _queryClassificationMetadatas;
    GEOPDSearchQueryCompletionMetadata * _queryCompletionMetadata;
    GEOPDSearchQueryDirectionsIntentMetadata * _queryDirectionsIntentMetadata;
    GEOPDSearchQueryDymMetadata * _queryDymMetadata;
    NSMutableArray * _queryEmbeddingMetadatas;
    GEOPDSearchQueryFuzzyMatchV2Metadata * _queryFuzzyMatchV2Metadata;
    GEOPDSearchQueryGeoMetadata * _queryGeoMetadata;
    GEOPDSearchQueryGeoNormalizerMetadata * _queryGeoNormalizerMetadata;
    GEOPDSearchQueryGeoTagMetadata * _queryGeoTagMetadata;
    double  _queryIntentWeight;
    GEOPDSearchQueryInterpretationMetadata * _queryInterpretationMetadata;
    GEOPDSearchQueryNeuralRewriteMetadata * _queryNeuralRewriteMetadata;
    GEOPDSearchQueryNormalizerMetadata * _queryNormalizerMetadata;
    GEOPDSearchQueryPoiMetadata * _queryPoiMetadata;
    GEOPDSearchQuerySpellCorrectionMetadata * _querySpellCorrectionMetadata;
    GEOPDSearchQuerySynonymMetadata * _querySynonymMetadata;
    GEOPDSearchQueryTagMetadata * _queryTagMetadata;
    GEOPDSearchQueryTokenImportanceMetadata * _queryTokenImportanceMetadata;
    GEOPDSearchQueryTokenizerMetadata * _queryTokenizerMetadata;
    GEOPDSearchQueryTransliteratorMetadata * _queryTransliterMetadata;
    GEOPDSearchQueryTokenizerMetadata * _rawQueryTokenizerMetadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _rewrittenQuery;
    int  _rewrittenQueryIndex;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rewrittenQueryTypes;
    GEOPDSearchRichBrandMetadata * _richBrandMetadata;
    GEOPDSearchTokenSynonymMetadata * _tokenSynonymMetadata;
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
