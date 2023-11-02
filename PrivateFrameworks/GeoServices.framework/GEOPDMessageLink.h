
@interface GEOPDMessageLink : PBCodable <NSCopying> {
    struct { 
        unsigned int has_responseTime : 1; 
        unsigned int has_isVerified : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_hoursOfOperations : 1; 
        unsigned int read_messageId : 1; 
        unsigned int read_messageUrl : 1; 
        unsigned int read_navBackgroundColor : 1; 
        unsigned int read_navTintColor : 1; 
        unsigned int read_timezone : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _hoursOfOperations;
    bool  _isVerified;
    NSString * _messageId;
    NSString * _messageUrl;
    NSString * _navBackgroundColor;
    NSString * _navTintColor;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _responseTime;
    GEOTimezone * _timezone;
    PBUnknownFields * _unknownFields;
}

+ (id)messageLinkForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
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
