
@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying> {
    int  _countOfSubscriptionsDetected;
    struct { 
        unsigned int countOfSubscriptionsDetected : 1; 
    }  _has;
}

@property (nonatomic) int countOfSubscriptionsDetected;
@property (nonatomic) bool hasCountOfSubscriptionsDetected;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countOfSubscriptionsDetected;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountOfSubscriptionsDetected;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCountOfSubscriptionsDetected:(int)arg1;
- (void)setHasCountOfSubscriptionsDetected:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
