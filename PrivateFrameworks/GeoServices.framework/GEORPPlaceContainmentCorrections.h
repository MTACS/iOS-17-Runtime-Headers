
@interface GEORPPlaceContainmentCorrections : PBCodable <NSCopying> {
    GEORPContainmentCorrection * _childContainment;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_childContainment : 1; 
        unsigned int read_parentContainment : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPContainmentCorrection * _parentContainment;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORPContainmentCorrection *childContainment;
@property (nonatomic, readonly) bool hasChildContainment;
@property (nonatomic, readonly) bool hasParentContainment;
@property (nonatomic, retain) GEORPContainmentCorrection *parentContainment;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)childContainment;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChildContainment;
- (bool)hasParentContainment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)parentContainment;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChildContainment:(id)arg1;
- (void)setParentContainment:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
