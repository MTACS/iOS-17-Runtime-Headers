
@interface GEORRRequestResponseEvent : PBCodable <NSCopying> {
    NSData * _encoded;
    NSString * _error;
    NSString * _eventId;
    int  _eventType;
    struct { 
        unsigned int has_timestamp : 1; 
        unsigned int has_eventType : 1; 
        unsigned int has_requestType : 1; 
        unsigned int has_withARPC : 1; 
        unsigned int read_encoded : 1; 
        unsigned int read_error : 1; 
        unsigned int read_eventId : 1; 
        unsigned int read_url : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _requestType;
    unsigned long long  _timestamp;
    NSString * _url;
    bool  _withARPC;
}

@property (nonatomic, retain) NSData *encoded;
@property (nonatomic, retain) NSString *error;
@property (nonatomic, retain) NSString *eventId;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) bool hasEncoded;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, readonly) bool hasEventId;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic) bool hasWithARPC;
@property (nonatomic) int requestType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *url;
@property (nonatomic) bool withARPC;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (int)StringAsRequestType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodeEvent;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encoded;
- (id)error;
- (id)eventId;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasEncoded;
- (bool)hasError;
- (bool)hasEventId;
- (bool)hasEventType;
- (bool)hasRequestType;
- (bool)hasTimestamp;
- (bool)hasUrl;
- (bool)hasWithARPC;
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
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (void)setEncoded:(id)arg1;
- (void)setError:(id)arg1;
- (void)setEventId:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWithARPC:(bool)arg1;
- (void)setRequestType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setWithARPC:(bool)arg1;
- (unsigned long long)timestamp;
- (id)url;
- (bool)withARPC;
- (void)writeTo:(id)arg1;

@end
