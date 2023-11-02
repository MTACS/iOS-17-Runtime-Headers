
@interface GEOTransitSection : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _actionSheetArtworkIndexs;
    NSString * _actionSheetName;
    bool  _disableAlightNotifications;
    struct { 
        unsigned int has_nextOptionsIndex : 1; 
        unsigned int has_disableAlightNotifications : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_actionSheetArtworkIndexs : 1; 
        unsigned int read_routeDetailsArtworkIndexs : 1; 
        unsigned int read_stepIndexs : 1; 
        unsigned int read_actionSheetName : 1; 
        unsigned int read_ticketingSegments : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _nextOptionsIndex;
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
    }  _routeDetailsArtworkIndexs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _stepIndexs;
    NSMutableArray * _ticketingSegments;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned int*actionSheetArtworkIndexs;
@property (nonatomic, readonly) unsigned long long actionSheetArtworkIndexsCount;
@property (nonatomic, retain) NSString *actionSheetName;
@property (nonatomic) bool disableAlightNotifications;
@property (nonatomic, readonly) bool hasActionSheetName;
@property (nonatomic) bool hasDisableAlightNotifications;
@property (nonatomic) bool hasNextOptionsIndex;
@property (nonatomic) int nextOptionsIndex;
@property (nonatomic, readonly) unsigned int*routeDetailsArtworkIndexs;
@property (nonatomic, readonly) unsigned long long routeDetailsArtworkIndexsCount;
@property (nonatomic, readonly) unsigned int*stepIndexs;
@property (nonatomic, readonly) unsigned long long stepIndexsCount;
@property (nonatomic, retain) NSMutableArray *ticketingSegments;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)ticketingSegmentType;

- (void).cxx_destruct;
- (unsigned int)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)actionSheetArtworkIndexs;
- (unsigned long long)actionSheetArtworkIndexsCount;
- (id)actionSheetName;
- (void)addActionSheetArtworkIndex:(unsigned int)arg1;
- (void)addRouteDetailsArtworkIndex:(unsigned int)arg1;
- (void)addStepIndex:(unsigned int)arg1;
- (void)addTicketingSegment:(id)arg1;
- (void)clearActionSheetArtworkIndexs;
- (void)clearRouteDetailsArtworkIndexs;
- (void)clearStepIndexs;
- (void)clearTicketingSegments;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)disableAlightNotifications;
- (bool)hasActionSheetName;
- (bool)hasDisableAlightNotifications;
- (bool)hasNextOptionsIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)nextOptionsIndex;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)routeDetailsArtworkIndexs;
- (unsigned long long)routeDetailsArtworkIndexsCount;
- (void)setActionSheetArtworkIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setActionSheetName:(id)arg1;
- (void)setDisableAlightNotifications:(bool)arg1;
- (void)setHasDisableAlightNotifications:(bool)arg1;
- (void)setHasNextOptionsIndex:(bool)arg1;
- (void)setNextOptionsIndex:(int)arg1;
- (void)setRouteDetailsArtworkIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setStepIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTicketingSegments:(id)arg1;
- (unsigned int)stepIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)stepIndexs;
- (unsigned long long)stepIndexsCount;
- (id)ticketingSegmentAtIndex:(unsigned long long)arg1;
- (id)ticketingSegments;
- (unsigned long long)ticketingSegmentsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
