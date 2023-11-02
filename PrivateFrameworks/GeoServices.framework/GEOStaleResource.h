
@interface GEOStaleResource : PBCodable <NSCopying> {
    GEOResource * _desiredResource;
    GEOResource * _fallbackResource;
    struct { 
        unsigned int has_originalTimestamp : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_desiredResource : 1; 
        unsigned int read_fallbackResource : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    double  _originalTimestamp;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOResource *desiredResource;
@property (nonatomic, retain) GEOResource *fallbackResource;
@property (nonatomic, readonly) bool hasDesiredResource;
@property (nonatomic, readonly) bool hasFallbackResource;
@property (nonatomic) bool hasOriginalTimestamp;
@property (nonatomic) double originalTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)desiredResource;
- (id)dictionaryRepresentation;
- (id)fallbackResource;
- (bool)hasDesiredResource;
- (bool)hasFallbackResource;
- (bool)hasOriginalTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (double)originalTimestamp;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDesiredResource:(id)arg1;
- (void)setFallbackResource:(id)arg1;
- (void)setHasOriginalTimestamp:(bool)arg1;
- (void)setOriginalTimestamp:(double)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
