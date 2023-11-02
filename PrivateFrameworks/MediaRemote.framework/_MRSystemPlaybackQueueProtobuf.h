
@interface _MRSystemPlaybackQueueProtobuf : PBCodable <NSCopying> {
    _MRSystemPlaybackCustomDataQueueProtobuf * _customData;
    NSString * _featureName;
    struct { 
        unsigned int replaceIntent : 1; 
        unsigned int isRequestingImmediatePlayback : 1; 
    }  _has;
    bool  _isRequestingImmediatePlayback;
    NSData * _metrics;
    int  _replaceIntent;
    _MRSystemPlaybackGenericTracklistQueueProtobuf * _tracklist;
    int  _type;
    NSData * _userInfo;
}

@property (nonatomic, retain) _MRSystemPlaybackCustomDataQueueProtobuf *customData;
@property (nonatomic, retain) NSString *featureName;
@property (nonatomic, readonly) bool hasCustomData;
@property (nonatomic, readonly) bool hasFeatureName;
@property (nonatomic) bool hasIsRequestingImmediatePlayback;
@property (nonatomic, readonly) bool hasMetrics;
@property (nonatomic) bool hasReplaceIntent;
@property (nonatomic, readonly) bool hasTracklist;
@property (nonatomic, readonly) bool hasUserInfo;
@property (nonatomic) bool isRequestingImmediatePlayback;
@property (nonatomic, retain) NSData *metrics;
@property (nonatomic) int replaceIntent;
@property (nonatomic, retain) _MRSystemPlaybackGenericTracklistQueueProtobuf *tracklist;
@property (nonatomic) int type;
@property (nonatomic, retain) NSData *userInfo;

- (void).cxx_destruct;
- (int)StringAsReplaceIntent:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customData;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureName;
- (bool)hasCustomData;
- (bool)hasFeatureName;
- (bool)hasIsRequestingImmediatePlayback;
- (bool)hasMetrics;
- (bool)hasReplaceIntent;
- (bool)hasTracklist;
- (bool)hasUserInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isRequestingImmediatePlayback;
- (void)mergeFrom:(id)arg1;
- (id)metrics;
- (bool)readFrom:(id)arg1;
- (int)replaceIntent;
- (id)replaceIntentAsString:(int)arg1;
- (void)setCustomData:(id)arg1;
- (void)setFeatureName:(id)arg1;
- (void)setHasIsRequestingImmediatePlayback:(bool)arg1;
- (void)setHasReplaceIntent:(bool)arg1;
- (void)setIsRequestingImmediatePlayback:(bool)arg1;
- (void)setMetrics:(id)arg1;
- (void)setReplaceIntent:(int)arg1;
- (void)setTracklist:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUserInfo:(id)arg1;
- (id)tracklist;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)userInfo;
- (void)writeTo:(id)arg1;

@end
