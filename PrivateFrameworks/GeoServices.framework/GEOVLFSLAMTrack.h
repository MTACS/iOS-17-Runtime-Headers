
@interface GEOVLFSLAMTrack : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _descriptors;
    struct { 
        unsigned int read_descriptors : 1; 
        unsigned int read_observationImageIndices : 1; 
        unsigned int read_imagePositions : 1; 
        unsigned int read_position : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _imagePositions;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _observationImageIndices;
    GEOVLFPoint3D * _position;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) unsigned int*descriptors;
@property (nonatomic, readonly) unsigned long long descriptorsCount;
@property (nonatomic, readonly) bool hasPosition;
@property (nonatomic, retain) NSMutableArray *imagePositions;
@property (nonatomic, readonly) unsigned int*observationImageIndices;
@property (nonatomic, readonly) unsigned long long observationImageIndicesCount;
@property (nonatomic, retain) GEOVLFPoint3D *position;

+ (Class)imagePositionsType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addDescriptors:(unsigned int)arg1;
- (void)addImagePositions:(id)arg1;
- (void)addObservationImageIndices:(unsigned int)arg1;
- (void)clearDescriptors;
- (void)clearImagePositions;
- (void)clearObservationImageIndices;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int*)descriptors;
- (unsigned int)descriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)descriptorsCount;
- (id)dictionaryRepresentation;
- (bool)hasPosition;
- (unsigned long long)hash;
- (id)imagePositions;
- (id)imagePositionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imagePositionsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int*)observationImageIndices;
- (unsigned int)observationImageIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)observationImageIndicesCount;
- (id)position;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDescriptors:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setImagePositions:(id)arg1;
- (void)setObservationImageIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPosition:(id)arg1;
- (void)writeTo:(id)arg1;

@end
