
@interface GEORPUserPath : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_nativePaths : 1; 
        unsigned int read_webPaths : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _nativePaths;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _webPaths;
}

@property (nonatomic, readonly) int*nativePaths;
@property (nonatomic, readonly) unsigned long long nativePathsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *webPaths;

+ (bool)isValid:(id)arg1;
+ (Class)webPathType;

- (void).cxx_destruct;
- (int)StringAsNativePaths:(id)arg1;
- (void)addNativePath:(int)arg1;
- (void)addWebPath:(id)arg1;
- (void)clearNativePaths;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearWebPaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)nativePathAtIndex:(unsigned long long)arg1;
- (int*)nativePaths;
- (id)nativePathsAsString:(int)arg1;
- (unsigned long long)nativePathsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setNativePaths:(int*)arg1 count:(unsigned long long)arg2;
- (void)setWebPaths:(id)arg1;
- (id)unknownFields;
- (id)webPathAtIndex:(unsigned long long)arg1;
- (id)webPaths;
- (unsigned long long)webPathsCount;
- (void)writeTo:(id)arg1;

@end
