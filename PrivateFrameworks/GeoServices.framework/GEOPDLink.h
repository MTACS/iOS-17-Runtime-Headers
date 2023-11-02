
@interface GEOPDLink : PBCodable <NSCopying> {
    GEOPDAppClipParams * _appClipParams;
    GEOPDExtensionParams * _extensionParams;
    struct { 
        unsigned int has_linkType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_appClipParams : 1; 
        unsigned int read_extensionParams : 1; 
        unsigned int read_quickLinkParams : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _linkType;
    GEOPDQuickLinkActionDataParams * _quickLinkParams;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
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
