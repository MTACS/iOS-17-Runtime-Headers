
@interface MPMutableStoreAssetPlaybackResponse : MPStoreAssetPlaybackResponse

@property (nonatomic, copy) NSDictionary *dialogDictionary;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSArray *fileAssetInfoList;
@property (nonatomic, retain) MPStoreHLSAssetInfo *hlsAssetInfo;
@property (getter=isLiveRadioStream, nonatomic) bool liveRadioStream;
@property (nonatomic) bool onlineSubscriptionKeysRequired;
@property (nonatomic, copy) NSArray *radioStreamAssetInfoList;
@property (getter=isSubscriptionRequired, nonatomic) bool subscriptionRequired;
@property (nonatomic, retain) id suzeLeaseID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDialogDictionary:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFileAssetInfoList:(id)arg1;
- (void)setHlsAssetInfo:(id)arg1;
- (void)setLiveRadioStream:(bool)arg1;
- (void)setOnlineSubscriptionKeysRequired:(bool)arg1;
- (void)setRadioStreamAssetInfoList:(id)arg1;
- (void)setSubscriptionRequired:(bool)arg1;
- (void)setSuzeLeaseID:(id)arg1;

@end
