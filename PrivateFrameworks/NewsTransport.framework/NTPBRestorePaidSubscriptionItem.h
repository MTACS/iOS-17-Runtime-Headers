
@interface NTPBRestorePaidSubscriptionItem : PBCodable <NSCopying> {
    struct { 
        unsigned int isNewsAppPurchase : 1; 
    }  _has;
    bool  _isNewsAppPurchase;
    NSString * _restoredPaidSubscriptionChannelId;
}

@property (nonatomic) bool hasIsNewsAppPurchase;
@property (nonatomic, readonly) bool hasRestoredPaidSubscriptionChannelId;
@property (nonatomic) bool isNewsAppPurchase;
@property (nonatomic, retain) NSString *restoredPaidSubscriptionChannelId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsNewsAppPurchase;
- (bool)hasRestoredPaidSubscriptionChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isNewsAppPurchase;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)restoredPaidSubscriptionChannelId;
- (void)setHasIsNewsAppPurchase:(bool)arg1;
- (void)setIsNewsAppPurchase:(bool)arg1;
- (void)setRestoredPaidSubscriptionChannelId:(id)arg1;
- (void)writeTo:(id)arg1;

@end