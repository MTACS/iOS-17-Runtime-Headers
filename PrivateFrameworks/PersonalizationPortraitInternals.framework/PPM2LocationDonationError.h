
@interface PPM2LocationDonationError : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    NSString * _bundleId;
    struct { 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasReason;
@property (nonatomic) int reason;

- (void).cxx_destruct;
- (int)StringAsReason:(id)arg1;
- (id)activeTreatments;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveTreatments;
- (bool)hasBundleId;
- (bool)hasReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)writeTo:(id)arg1;

@end
