
@interface GEOSearchAttributionSource : PBCodable <NSCopying> {
    NSString * _appAdamID;
    NSMutableArray * _attributionApps;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _attributionRequirements;
    bool  _enforceAppStore;
    struct { 
        unsigned int has_enforceAppStore : 1; 
        unsigned int has_requiresAttributionInPhotoViewerHeader : 1; 
        unsigned int read_attributionRequirements : 1; 
        unsigned int read_suppressAttributionLogos : 1; 
        unsigned int read_appAdamID : 1; 
        unsigned int read_attributionApps : 1; 
        unsigned int read_localizedAttributions : 1; 
        unsigned int read_sourceIdentifier : 1; 
        unsigned int read_supportedComponentActions : 1; 
        unsigned int read_webBaseActionURL : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _localizedAttributions;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _requiresAttributionInPhotoViewerHeader;
    NSString * _sourceIdentifier;
    unsigned int  _sourceVersion;
    NSMutableArray * _supportedComponentActions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _suppressAttributionLogos;
    NSString * _webBaseActionURL;
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
