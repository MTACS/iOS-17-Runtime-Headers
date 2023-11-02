
@interface GEOABBranchInfo : PBCodable <NSCopying> {
    NSString * _abBranchId;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_abBranchId : 1; 
        unsigned int read_multilayerAbBranchId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _multilayerAbBranchId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *abBranchId;
@property (nonatomic, readonly) bool hasAbBranchId;
@property (nonatomic, readonly) bool hasMultilayerAbBranchId;
@property (nonatomic, retain) NSString *multilayerAbBranchId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)abBranchId;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbBranchId;
- (bool)hasMultilayerAbBranchId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)multilayerAbBranchId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbBranchId:(id)arg1;
- (void)setMultilayerAbBranchId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
