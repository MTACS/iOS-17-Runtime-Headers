
@interface MXAudioFrame : PBCodable <NSCopying> {
    NSMutableArray * _audios;
    struct { 
        unsigned int lastFrame : 1; 
    }  _has;
    bool  _lastFrame;
    NSString * _requestId;
}

@property (nonatomic, retain) NSMutableArray *audios;
@property (nonatomic) bool hasLastFrame;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic) bool lastFrame;
@property (nonatomic, retain) NSString *requestId;

+ (Class)audioType;

- (void).cxx_destruct;
- (void)addAudio:(id)arg1;
- (id)audioAtIndex:(unsigned long long)arg1;
- (id)audios;
- (unsigned long long)audiosCount;
- (void)clearAudios;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastFrame;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)lastFrame;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setAudios:(id)arg1;
- (void)setHasLastFrame:(bool)arg1;
- (void)setLastFrame:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
