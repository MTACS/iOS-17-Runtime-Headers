
@protocol _INPBPrivateMediaItemValueData <NSObject>

@required

+ (Class)mediaSubItemsType;

- (int)StringAsAmpConfidenceLevel:(NSString *)arg1;
- (void)addInternalSignal:(NSString *)arg1;
- (void)addMediaSubItems:(_INPBMediaSubItem *)arg1;
- (int)ampConfidenceLevel;
- (NSString *)ampConfidenceLevelAsString:(int)arg1;
- (float)ampConfidenceScore;
- (NSString *)assetInfo;
- (NSString *)bundleId;
- (void)clearInternalSignals;
- (void)clearMediaSubItems;
- (bool)hasAmpConfidenceLevel;
- (bool)hasAmpConfidenceScore;
- (bool)hasAssetInfo;
- (bool)hasBundleId;
- (bool)hasIsAvailable;
- (bool)hasIsHardBan;
- (bool)hasProvider;
- (bool)hasProviderAppName;
- (bool)hasPunchoutURI;
- (bool)hasRecommendationId;
- (bool)hasRequiresSubscription;
- (bool)hasSharedUserIdFromPlayableMusicAccount;
- (bool)hasUniversalResourceLink;
- (NSString *)internalSignalAtIndex:(unsigned long long)arg1;
- (NSArray *)internalSignals;
- (unsigned long long)internalSignalsCount;
- (bool)isAvailable;
- (bool)isHardBan;
- (NSArray *)mediaSubItems;
- (_INPBMediaSubItem *)mediaSubItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaSubItemsCount;
- (NSString *)provider;
- (NSString *)providerAppName;
- (NSString *)punchoutURI;
- (NSString *)recommendationId;
- (bool)requiresSubscription;
- (void)setAmpConfidenceLevel:(int)arg1;
- (void)setAmpConfidenceScore:(float)arg1;
- (void)setAssetInfo:(NSString *)arg1;
- (void)setBundleId:(NSString *)arg1;
- (void)setHasAmpConfidenceLevel:(bool)arg1;
- (void)setHasAmpConfidenceScore:(bool)arg1;
- (void)setHasIsAvailable:(bool)arg1;
- (void)setHasIsHardBan:(bool)arg1;
- (void)setHasRequiresSubscription:(bool)arg1;
- (void)setInternalSignals:(NSArray *)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)setIsHardBan:(bool)arg1;
- (void)setMediaSubItems:(NSArray *)arg1;
- (void)setProvider:(NSString *)arg1;
- (void)setProviderAppName:(NSString *)arg1;
- (void)setPunchoutURI:(NSString *)arg1;
- (void)setRecommendationId:(NSString *)arg1;
- (void)setRequiresSubscription:(bool)arg1;
- (void)setSharedUserIdFromPlayableMusicAccount:(NSString *)arg1;
- (void)setUniversalResourceLink:(NSString *)arg1;
- (NSString *)sharedUserIdFromPlayableMusicAccount;
- (NSString *)universalResourceLink;

@end
