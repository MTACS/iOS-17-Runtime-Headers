
@interface _MRPlaybackSessionRequestProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int length : 1; 
        unsigned int location : 1; 
    }  _has;
    NSString * _identifier;
    int  _length;
    int  _location;
    NSString * _requestID;
    NSString * _type;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasLength;
@property (nonatomic) bool hasLocation;
@property (nonatomic, readonly) bool hasRequestID;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int length;
@property (nonatomic) int location;
@property (nonatomic, retain) NSString *requestID;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasLength;
- (bool)hasLocation;
- (bool)hasRequestID;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (int)length;
- (int)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (void)setHasLength:(bool)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLength:(int)arg1;
- (void)setLocation:(int)arg1;
- (void)setRequestID:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end
