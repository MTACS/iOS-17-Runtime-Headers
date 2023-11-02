
@interface TVRMSNowPlayingInfoDidUpdateMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    TVRMSNowPlayingInfoMessage * _nowPlayingInfo;
    int  _sessionIdentifier;
}

@property (nonatomic, readonly) bool hasNowPlayingInfo;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic, retain) TVRMSNowPlayingInfoMessage *nowPlayingInfo;
@property (nonatomic) int sessionIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNowPlayingInfo;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfo;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
