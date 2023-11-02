
@interface GEORequestResponseMetadata : PBCodable <NSCopying> {
    double  _collectionTime;
    GEOLogMsgEventServiceMetadata * _eventMetadata;
    struct { 
        unsigned int has_collectionTime : 1; 
        unsigned int has_sessionBatchIdBits : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_eventMetadata : 1; 
        unsigned int read_stateOffline : 1; 
        unsigned int read_stateUserSession : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _sessionBatchIdBits;
    GEOLogMsgStateOffline * _stateOffline;
    GEOLogMsgStateUserSession * _stateUserSession;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double collectionTime;
@property (nonatomic, retain) GEOLogMsgEventServiceMetadata *eventMetadata;
@property (nonatomic) bool hasCollectionTime;
@property (nonatomic, readonly) bool hasEventMetadata;
@property (nonatomic) bool hasSessionBatchIdBits;
@property (nonatomic, readonly) bool hasStateOffline;
@property (nonatomic, readonly) bool hasStateUserSession;
@property (nonatomic) unsigned int sessionBatchIdBits;
@property (nonatomic, retain) GEOLogMsgStateOffline *stateOffline;
@property (nonatomic, retain) GEOLogMsgStateUserSession *stateUserSession;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (double)collectionTime;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (bool)hasCollectionTime;
- (bool)hasEventMetadata;
- (bool)hasSessionBatchIdBits;
- (bool)hasStateOffline;
- (bool)hasStateUserSession;
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
- (unsigned int)sessionBatchIdBits;
- (void)setCollectionTime:(double)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasCollectionTime:(bool)arg1;
- (void)setHasSessionBatchIdBits:(bool)arg1;
- (void)setSessionBatchIdBits:(unsigned int)arg1;
- (void)setStateOffline:(id)arg1;
- (void)setStateUserSession:(id)arg1;
- (id)stateOffline;
- (id)stateUserSession;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
