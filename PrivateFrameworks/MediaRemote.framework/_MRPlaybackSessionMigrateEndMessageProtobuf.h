
@interface _MRPlaybackSessionMigrateEndMessageProtobuf : PBCodable <NSCopying> {
    long long  _errorCode;
    NSString * _errorDescription;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    _MRPlaybackSessionRequestProtobuf * _request;
}

@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, retain) _MRPlaybackSessionRequestProtobuf *request;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDescription;
- (bool)hasErrorCode;
- (bool)hasErrorDescription;
- (bool)hasPlayerPath;
- (bool)hasRequest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (id)request;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
