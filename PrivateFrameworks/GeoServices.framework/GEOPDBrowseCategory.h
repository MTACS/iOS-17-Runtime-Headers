
@interface GEOPDBrowseCategory : PBCodable <NSCopying> {
    int  _displayMode;
    NSString * _displayString;
    struct { 
        unsigned int has_displayMode : 1; 
        unsigned int has_sortOrder : 1; 
        unsigned int has_subCategoryType : 1; 
        unsigned int has_includeEvChargingParametersOnSearch : 1; 
        unsigned int has_isAllCategoryForVenue : 1; 
        unsigned int has_isSubCategorySameAsTopLevel : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayString : 1; 
        unsigned int read_popularDisplayToken : 1; 
        unsigned int read_shortDisplayString : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int read_subCategorys : 1; 
        unsigned int read_suggestionEntryMetadata : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _includeEvChargingParametersOnSearch;
    bool  _isAllCategoryForVenue;
    bool  _isSubCategorySameAsTopLevel;
    NSString * _popularDisplayToken;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _shortDisplayString;
    int  _sortOrder;
    GEOStyleAttributes * _styleAttributes;
    int  _subCategoryType;
    NSMutableArray * _subCategorys;
    NSData * _suggestionEntryMetadata;
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
