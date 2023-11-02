
@interface MPStoreAssetPlaybackResponse : NSObject <NSCopying, NSMutableCopying> {
    NSDictionary * _dialogDictionary;
    NSDate * _expirationDate;
    NSArray * _fileAssetInfoList;
    MPStoreHLSAssetInfo * _hlsAssetInfo;
    bool  _liveRadioStream;
    bool  _onlineSubscriptionKeysRequired;
    NSArray * _radioStreamAssetInfoList;
    bool  _subscriptionRequired;
    id  _suzeLeaseID;
}

@property (nonatomic, readonly, copy) NSDictionary *dialogDictionary;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSArray *fileAssetInfoList;
@property (nonatomic, readonly) MPStoreHLSAssetInfo *hlsAssetInfo;
@property (getter=isLiveRadioStream, nonatomic, readonly) bool liveRadioStream;
@property (nonatomic, readonly) bool onlineSubscriptionKeysRequired;
@property (nonatomic, readonly, copy) NSArray *radioStreamAssetInfoList;
@property (getter=isSubscriptionRequired, nonatomic, readonly) bool subscriptionRequired;
@property (nonatomic, readonly) id suzeLeaseID;

- (void).cxx_destruct;
- (id)_copyWithPlaybackResponseClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dialogDictionary;
- (id)expirationDate;
- (id)fileAssetInfoList;
- (id)hlsAssetInfo;
- (bool)isLiveRadioStream;
- (bool)isSubscriptionRequired;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)onlineSubscriptionKeysRequired;
- (id)radioStreamAssetInfoList;
- (id)suzeLeaseID;

@end
