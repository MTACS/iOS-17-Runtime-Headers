
@interface GEOPDSearchCategoryIntent : PBCodable <NSCopying> {
    NSMutableArray * _canonicalNames;
    NSMutableArray * _categoryIds;
    NSMutableArray * _categoryMappings;
    NSMutableArray * _expandedCategoryIds;
    NSMutableArray * _featureMaps;
    struct { 
        unsigned int read_keywordMuids : 1; 
        unsigned int read_canonicalNames : 1; 
        unsigned int read_categoryIds : 1; 
        unsigned int read_categoryMappings : 1; 
        unsigned int read_expandedCategoryIds : 1; 
        unsigned int read_featureMaps : 1; 
        unsigned int read_keywordMappings : 1; 
        unsigned int read_legacyCategoryIds : 1; 
        unsigned int read_modernToLegacyIdMappings : 1; 
        unsigned int read_negativeCategorys : 1; 
        unsigned int read_tokenSet : 1; 
        unsigned int read_trigger : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _keywordMappings;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _keywordMuids;
    NSMutableArray * _legacyCategoryIds;
    NSMutableArray * _modernToLegacyIdMappings;
    NSMutableArray * _negativeCategorys;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
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
