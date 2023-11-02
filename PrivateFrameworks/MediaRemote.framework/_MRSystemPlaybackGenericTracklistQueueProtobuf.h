
@interface _MRSystemPlaybackGenericTracklistQueueProtobuf : PBCodable <NSCopying> {
    NSData * _collectionIdentifierSet;
    NSString * _firstTrackIdentifier;
    struct { 
        unsigned int repeatMode : 1; 
        unsigned int shuffleMode : 1; 
    }  _has;
    int  _repeatMode;
    int  _shuffleMode;
    NSString * _trackIdentifiers;
}

@property (nonatomic, retain) NSData *collectionIdentifierSet;
@property (nonatomic, retain) NSString *firstTrackIdentifier;
@property (nonatomic, readonly) bool hasCollectionIdentifierSet;
@property (nonatomic, readonly) bool hasFirstTrackIdentifier;
@property (nonatomic) bool hasRepeatMode;
@property (nonatomic) bool hasShuffleMode;
@property (nonatomic, readonly) bool hasTrackIdentifiers;
@property (nonatomic) int repeatMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic, retain) NSString *trackIdentifiers;

- (void).cxx_destruct;
- (int)StringAsRepeatMode:(id)arg1;
- (int)StringAsShuffleMode:(id)arg1;
- (id)collectionIdentifierSet;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firstTrackIdentifier;
- (bool)hasCollectionIdentifierSet;
- (bool)hasFirstTrackIdentifier;
- (bool)hasRepeatMode;
- (bool)hasShuffleMode;
- (bool)hasTrackIdentifiers;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)repeatMode;
- (id)repeatModeAsString:(int)arg1;
- (void)setCollectionIdentifierSet:(id)arg1;
- (void)setFirstTrackIdentifier:(id)arg1;
- (void)setHasRepeatMode:(bool)arg1;
- (void)setHasShuffleMode:(bool)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setTrackIdentifiers:(id)arg1;
- (int)shuffleMode;
- (id)shuffleModeAsString:(int)arg1;
- (id)trackIdentifiers;
- (void)writeTo:(id)arg1;

@end
