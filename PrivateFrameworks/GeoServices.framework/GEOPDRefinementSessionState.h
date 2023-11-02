
@interface GEOPDRefinementSessionState : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_relatedEntitySections : 1; 
        unsigned int read_searchSectionList : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _relatedEntitySections;
    GEOPDSearchSectionList * _searchSectionList;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasSearchSectionList;
@property (nonatomic, retain) NSMutableArray *relatedEntitySections;
@property (nonatomic, retain) GEOPDSearchSectionList *searchSectionList;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)relatedEntitySectionType;

- (void).cxx_destruct;
- (void)addRelatedEntitySection:(id)arg1;
- (void)clearRelatedEntitySections;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasSearchSectionList;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)relatedEntitySectionAtIndex:(unsigned long long)arg1;
- (id)relatedEntitySections;
- (unsigned long long)relatedEntitySectionsCount;
- (id)searchSectionList;
- (void)setRelatedEntitySections:(id)arg1;
- (void)setSearchSectionList:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
