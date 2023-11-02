
@interface GEOTimeCheckpoints : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _distToNextCheckpoints;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_distToNextCheckpoints : 1; 
        unsigned int read_timeToNextCheckpoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _timeToNextCheckpoints;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned int*distToNextCheckpoints;
@property (nonatomic, readonly) unsigned long long distToNextCheckpointsCount;
@property (nonatomic, readonly) unsigned int*timeToNextCheckpoints;
@property (nonatomic, readonly) unsigned long long timeToNextCheckpointsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addDistToNextCheckpoint:(unsigned int)arg1;
- (void)addTimeToNextCheckpoint:(unsigned int)arg1;
- (void)clearDistToNextCheckpoints;
- (void)clearTimeToNextCheckpoints;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distToNextCheckpointAtIndex:(unsigned long long)arg1;
- (unsigned int*)distToNextCheckpoints;
- (unsigned long long)distToNextCheckpointsCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistToNextCheckpoints:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTimeToNextCheckpoints:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int)timeToNextCheckpointAtIndex:(unsigned long long)arg1;
- (unsigned int*)timeToNextCheckpoints;
- (unsigned long long)timeToNextCheckpointsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
