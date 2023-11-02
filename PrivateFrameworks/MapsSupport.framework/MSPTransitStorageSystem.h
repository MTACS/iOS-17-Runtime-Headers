
@interface MSPTransitStorageSystem : PBCodable <GEOTransitSystem, NSCopying> {
    MSPTransitStorageArtwork * _artwork;
    struct { 
        unsigned int muid : 1; 
    }  _has;
    unsigned long long  _muid;
    NSString * _name;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) MSPTransitStorageArtwork *artwork;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)artwork;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtwork;
- (bool)hasMuid;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithSystem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end