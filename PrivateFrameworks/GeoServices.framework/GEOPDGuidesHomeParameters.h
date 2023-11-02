
@interface GEOPDGuidesHomeParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_supportedFixedSectionTypes : 1; 
        unsigned int read_supportedRepeatableSectionTypes : 1; 
        unsigned int read_guidesLocationEntry : 1; 
        unsigned int read_refinementGuidesHome : 1; 
        unsigned int read_resultFilter : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDGuidesLocationEntry * _guidesLocationEntry;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDResultRefinementGuidesHome * _refinementGuidesHome;
    GEOPDGuidesHomeResultFilter * _resultFilter;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedFixedSectionTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedRepeatableSectionTypes;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
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
