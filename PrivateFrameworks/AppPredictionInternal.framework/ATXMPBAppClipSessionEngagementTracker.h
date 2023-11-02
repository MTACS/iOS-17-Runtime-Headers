
@interface ATXMPBAppClipSessionEngagementTracker : PBCodable <NSCopying> {
    NSString * _bundleId;
    NSString * _consumerSubType;
    struct { 
        unsigned int interactionType : 1; 
    }  _has;
    int  _interactionType;
    NSString * _urlHash;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic) bool hasInteractionType;
@property (nonatomic, readonly) bool hasUrlHash;
@property (nonatomic) int interactionType;
@property (nonatomic, retain) NSString *urlHash;

- (void).cxx_destruct;
- (int)StringAsInteractionType:(id)arg1;
- (id)bundleId;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleId;
- (bool)hasConsumerSubType;
- (bool)hasInteractionType;
- (bool)hasUrlHash;
- (unsigned long long)hash;
- (int)interactionType;
- (id)interactionTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setHasInteractionType:(bool)arg1;
- (void)setInteractionType:(int)arg1;
- (void)setUrlHash:(id)arg1;
- (id)urlHash;
- (void)writeTo:(id)arg1;

@end
