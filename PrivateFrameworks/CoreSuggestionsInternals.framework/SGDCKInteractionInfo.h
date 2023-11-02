
@interface SGDCKInteractionInfo : PBCodable <NSCopying> {
    NSString * _intentResponseUserActivityString;
    NSString * _interactionBundleId;
    NSString * _interactionGroupId;
    NSString * _interactionId;
    NSString * _interactionTeamId;
    NSData * _reservationContainerReference;
    NSData * _reservationItemReferences;
}

@property (nonatomic, readonly) bool hasIntentResponseUserActivityString;
@property (nonatomic, readonly) bool hasInteractionBundleId;
@property (nonatomic, readonly) bool hasInteractionGroupId;
@property (nonatomic, readonly) bool hasInteractionId;
@property (nonatomic, readonly) bool hasInteractionTeamId;
@property (nonatomic, readonly) bool hasReservationContainerReference;
@property (nonatomic, readonly) bool hasReservationItemReferences;
@property (nonatomic, retain) NSString *intentResponseUserActivityString;
@property (nonatomic, retain) NSString *interactionBundleId;
@property (nonatomic, retain) NSString *interactionGroupId;
@property (nonatomic, retain) NSString *interactionId;
@property (nonatomic, retain) NSString *interactionTeamId;
@property (nonatomic, retain) NSData *reservationContainerReference;
@property (nonatomic, retain) NSData *reservationItemReferences;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntentResponseUserActivityString;
- (bool)hasInteractionBundleId;
- (bool)hasInteractionGroupId;
- (bool)hasInteractionId;
- (bool)hasInteractionTeamId;
- (bool)hasReservationContainerReference;
- (bool)hasReservationItemReferences;
- (unsigned long long)hash;
- (id)intentResponseUserActivityString;
- (id)interactionBundleId;
- (id)interactionGroupId;
- (id)interactionId;
- (id)interactionTeamId;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reservationContainerReference;
- (id)reservationItemReferences;
- (void)setIntentResponseUserActivityString:(id)arg1;
- (void)setInteractionBundleId:(id)arg1;
- (void)setInteractionGroupId:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setInteractionTeamId:(id)arg1;
- (void)setReservationContainerReference:(id)arg1;
- (void)setReservationItemReferences:(id)arg1;
- (void)writeTo:(id)arg1;

@end
