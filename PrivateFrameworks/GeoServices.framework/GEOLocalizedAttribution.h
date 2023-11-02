
@interface GEOLocalizedAttribution : PBCodable <NSCopying> {
    NSString * _captionDisplayString;
    NSString * _displayName;
    struct { 
        unsigned int read_captionDisplayString : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_language : 1; 
        unsigned int read_logoURLs : 1; 
        unsigned int read_snippetLogoURLs : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _language;
    NSMutableArray * _logoURLs;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _snippetLogoURLs;
}

- (void).cxx_destruct;
- (id)bestURLForLogos:(id)arg1 scale:(double)arg2;
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
