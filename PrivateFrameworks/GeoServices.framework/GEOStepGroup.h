
@interface GEOStepGroup : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_stepIds : 1; 
        unsigned int read_groupInstruction : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOFormattedString * _groupInstruction;
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
    }  _stepIds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOFormattedString *groupInstruction;
@property (nonatomic, readonly) bool hasGroupInstruction;
@property (nonatomic, readonly) unsigned int*stepIds;
@property (nonatomic, readonly) unsigned long long stepIdsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addStepId:(unsigned int)arg1;
- (void)clearStepIds;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupInstruction;
- (bool)hasGroupInstruction;
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
- (void)setGroupInstruction:(id)arg1;
- (void)setStepIds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int)stepIdAtIndex:(unsigned long long)arg1;
- (unsigned int*)stepIds;
- (unsigned long long)stepIdsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
