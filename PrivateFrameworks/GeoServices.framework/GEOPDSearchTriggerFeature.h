
@interface GEOPDSearchTriggerFeature : PBCodable <NSCopying> {
    NSString * _canonicalName;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _completionSourceTypes;
    long long  _densityScore;
    NSString * _displayName;
    NSString * _entityId;
    struct { 
        unsigned int has_densityScore : 1; 
        unsigned int has_globalEntityPopularity : 1; 
        unsigned int has_globalPopularity : 1; 
        unsigned int has_lat : 1; 
        unsigned int has_lng : 1; 
        unsigned int has_localPopularity : 1; 
        unsigned int has_localEntityPopularity : 1; 
        unsigned int has_similarityScore : 1; 
        unsigned int has_w2vSimilarityScore : 1; 
        unsigned int has_globalPmiScore : 1; 
        unsigned int has_localPmiScore : 1; 
        unsigned int has_tag : 1; 
        unsigned int has_isUseShowOnMapHighlightExtra : 1; 
        unsigned int read_completionSourceTypes : 1; 
        unsigned int read_canonicalName : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_entityId : 1; 
        unsigned int read_modernToLegacyIdMappings : 1; 
        unsigned int read_prefCategorys : 1; 
        unsigned int read_relatedCategories : 1; 
        unsigned int read_trigger : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    long long  _globalEntityPopularity;
    float  _globalPmiScore;
    long long  _globalPopularity;
    bool  _isUseShowOnMapHighlightExtra;
    double  _lat;
    double  _lng;
    long long  _localEntityPopularity;
    float  _localPmiScore;
    long long  _localPopularity;
    NSMutableArray * _modernToLegacyIdMappings;
    NSMutableArray * _prefCategorys;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _relatedCategories;
    double  _similarityScore;
    int  _tag;
    NSString * _trigger;
    double  _w2vSimilarityScore;
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
