
@interface GEOPDSSearchResultSection : PBCodable <NSCopying> {
    struct { 
        unsigned int has_searchResultSectionCellType : 1; 
        unsigned int has_searchResultSectionType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_resolvedItems : 1; 
        unsigned int read_sectionHeaderDisplayName : 1; 
        unsigned int read_sectionSubHeaderDisplayNameWithEnrichment : 1; 
        unsigned int read_sectionSubHeaderDisplayName : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _resolvedItems;
    int  _searchResultSectionCellType;
    int  _searchResultSectionType;
    NSString * _sectionHeaderDisplayName;
    NSString * _sectionSubHeaderDisplayName;
    NSString * _sectionSubHeaderDisplayNameWithEnrichment;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
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
