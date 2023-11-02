
@interface _MRPlaybackSessionProtobuf : PBCodable <NSCopying> {
    NSString * _identifier;
    NSData * _metadata;
    NSData * _playbackSessionData;
    NSString * _revision;
    NSString * _type;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasPlaybackSessionData;
@property (nonatomic, readonly) bool hasRevision;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, retain) NSData *playbackSessionData;
@property (nonatomic, retain) NSString *revision;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasMetadata;
- (bool)hasPlaybackSessionData;
- (bool)hasRevision;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (id)playbackSessionData;
- (bool)readFrom:(id)arg1;
- (id)revision;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPlaybackSessionData:(id)arg1;
- (void)setRevision:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end
