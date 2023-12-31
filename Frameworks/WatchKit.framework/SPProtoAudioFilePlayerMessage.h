
@interface SPProtoAudioFilePlayerMessage : PBCodable <NSCopying> {
    SPProtoAudioFilePlayerAsset * _asset;
    SPProtoAudioFilePlayerItem * _playerItem;
    SPProtoAudioFileQueuePlayer * _queuePlayer;
}

@property (nonatomic, retain) SPProtoAudioFilePlayerAsset *asset;
@property (nonatomic, readonly) bool hasAsset;
@property (nonatomic, readonly) bool hasPlayerItem;
@property (nonatomic, readonly) bool hasQueuePlayer;
@property (nonatomic, retain) SPProtoAudioFilePlayerItem *playerItem;
@property (nonatomic, retain) SPProtoAudioFileQueuePlayer *queuePlayer;

- (void).cxx_destruct;
- (id)asset;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAsset;
- (bool)hasPlayerItem;
- (bool)hasQueuePlayer;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerItem;
- (id)queuePlayer;
- (bool)readFrom:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setQueuePlayer:(id)arg1;
- (void)writeTo:(id)arg1;

@end
