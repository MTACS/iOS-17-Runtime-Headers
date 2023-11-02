
@interface NTPBBundleSubscriberInfo : PBCodable <NSCopying> {
    int  _bundleSubscriptionStatus;
    struct { 
        unsigned int startTimestamp : 1; 
        unsigned int bundleSubscriptionStatus : 1; 
        unsigned int isAmplifyUser : 1; 
        unsigned int isBundlePurchaser : 1; 
        unsigned int isStoreDemoModeEnabled : 1; 
    }  _has;
    bool  _isAmplifyUser;
    bool  _isBundlePurchaser;
    bool  _isStoreDemoModeEnabled;
    long long  _startTimestamp;
    NSMutableArray * _subscribedChannelIds;
    NSString * _userId;
    NSString * _userStorefrontId;
}

@property (nonatomic) int bundleSubscriptionStatus;
@property (nonatomic) bool hasBundleSubscriptionStatus;
@property (nonatomic) bool hasIsAmplifyUser;
@property (nonatomic) bool hasIsBundlePurchaser;
@property (nonatomic) bool hasIsStoreDemoModeEnabled;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic, readonly) bool hasUserId;
@property (nonatomic, readonly) bool hasUserStorefrontId;
@property (nonatomic) bool isAmplifyUser;
@property (nonatomic) bool isBundlePurchaser;
@property (nonatomic) bool isStoreDemoModeEnabled;
@property (nonatomic) long long startTimestamp;
@property (nonatomic, retain) NSMutableArray *subscribedChannelIds;
@property (nonatomic, retain) NSString *userId;
@property (nonatomic, retain) NSString *userStorefrontId;

+ (Class)subscribedChannelIdsType;

- (void).cxx_destruct;
- (int)StringAsBundleSubscriptionStatus:(id)arg1;
- (void)addSubscribedChannelIds:(id)arg1;
- (int)bundleSubscriptionStatus;
- (id)bundleSubscriptionStatusAsString:(int)arg1;
- (void)clearSubscribedChannelIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleSubscriptionStatus;
- (bool)hasIsAmplifyUser;
- (bool)hasIsBundlePurchaser;
- (bool)hasIsStoreDemoModeEnabled;
- (bool)hasStartTimestamp;
- (bool)hasUserId;
- (bool)hasUserStorefrontId;
- (unsigned long long)hash;
- (bool)isAmplifyUser;
- (bool)isBundlePurchaser;
- (bool)isEqual:(id)arg1;
- (bool)isStoreDemoModeEnabled;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleSubscriptionStatus:(int)arg1;
- (void)setHasBundleSubscriptionStatus:(bool)arg1;
- (void)setHasIsAmplifyUser:(bool)arg1;
- (void)setHasIsBundlePurchaser:(bool)arg1;
- (void)setHasIsStoreDemoModeEnabled:(bool)arg1;
- (void)setHasStartTimestamp:(bool)arg1;
- (void)setIsAmplifyUser:(bool)arg1;
- (void)setIsBundlePurchaser:(bool)arg1;
- (void)setIsStoreDemoModeEnabled:(bool)arg1;
- (void)setStartTimestamp:(long long)arg1;
- (void)setSubscribedChannelIds:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)setUserStorefrontId:(id)arg1;
- (long long)startTimestamp;
- (id)subscribedChannelIds;
- (id)subscribedChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subscribedChannelIdsCount;
- (id)userId;
- (id)userStorefrontId;
- (void)writeTo:(id)arg1;

@end
