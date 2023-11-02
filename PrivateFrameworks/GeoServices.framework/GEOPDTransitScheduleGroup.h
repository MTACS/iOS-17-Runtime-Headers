
@interface GEOPDTransitScheduleGroup : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _departureSequenceContainerIndexs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _departureSequenceIndexs;
    NSString * _displayName;
    struct { 
        unsigned int has_groupType : 1; 
        unsigned int has_maxWalkingDistance : 1; 
        unsigned int has_maxWalkingTime : 1; 
        unsigned int has_minWalkingDistance : 1; 
        unsigned int has_minWalkingTime : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_departureSequenceContainerIndexs : 1; 
        unsigned int read_departureSequenceIndexs : 1; 
        unsigned int read_incidentIds : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_pinnedDisplayName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _groupType;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _incidentIds;
    unsigned int  _maxWalkingDistance;
    unsigned int  _maxWalkingTime;
    unsigned int  _minWalkingDistance;
    unsigned int  _minWalkingTime;
    NSString * _pinnedDisplayName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
