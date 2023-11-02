
@interface GEORegionalResourceTileData : PBCodable <NSCopying> {
    NSMutableArray * _attributions;
    NSMutableArray * _filenames;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_attributions : 1; 
        unsigned int read_filenames : 1; 
        unsigned int read_icons : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _icons;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *attributions;
@property (nonatomic, retain) NSMutableArray *filenames;
@property (nonatomic, retain) NSMutableArray *icons;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributionType;
+ (Class)filenameType;
+ (Class)iconType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAttribution:(id)arg1;
- (void)addFilename:(id)arg1;
- (void)addIcon:(id)arg1;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (void)clearAttributions;
- (void)clearFilenames;
- (void)clearIcons;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filenameAtIndex:(unsigned long long)arg1;
- (id)filenames;
- (unsigned long long)filenamesCount;
- (unsigned long long)hash;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)icons;
- (unsigned long long)iconsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setFilenames:(id)arg1;
- (void)setIcons:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
