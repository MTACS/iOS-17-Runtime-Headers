
@interface ATStoreInfo : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _assetDictionary;
    NSMutableDictionary * _downloadDictionary;
    ICStoreMediaResponseItem * _storeMediaResponseItem;
}

@property (nonatomic, retain) NSNumber *DSID;
@property (nonatomic, retain) NSString *XID;
@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, retain) NSString *appleID;
@property (nonatomic, readonly) NSDictionary *assetDictionary;
@property (nonatomic, retain) NSNumber *cloudDSID;
@property (nonatomic, retain) NSNumber *collectionID;
@property (nonatomic, retain) NSString *dimensions;
@property (nonatomic, readonly) NSDictionary *downloadDictionary;
@property (nonatomic, retain) NSNumber *drmFree;
@property (nonatomic, retain) NSNumber *endpointType;
@property (nonatomic, retain) NSString *flavor;
@property (nonatomic, retain) NSNumber *matchStatus;
@property (nonatomic, retain) NSString *podcastEpisodeGUID;
@property (nonatomic, retain) NSString *redownloadParams;
@property (nonatomic, retain) NSNumber *redownloadStatus;
@property (nonatomic, retain) NSNumber *sagaID;
@property (nonatomic, retain) ICStoreMediaResponseItem *storeMediaResponseItem;
@property (nonatomic, retain) NSString *storefrontID;
@property (nonatomic, retain) NSNumber *subscriptionID;
@property (nonatomic, retain) NSString *syncID;
@property (nonatomic, retain) NSNumber *versionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DSID;
- (id)XID;
- (id)adamID;
- (id)appleID;
- (id)assetDictionary;
- (id)cloudDSID;
- (id)collectionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dimensions;
- (id)downloadDictionary;
- (id)drmFree;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointType;
- (id)flavor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)matchStatus;
- (id)podcastEpisodeGUID;
- (id)redownloadParams;
- (id)redownloadStatus;
- (id)sagaID;
- (void)setAdamID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setCloudDSID:(id)arg1;
- (void)setCollectionID:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setDimensions:(id)arg1;
- (void)setDrmFree:(id)arg1;
- (void)setEndpointType:(id)arg1;
- (void)setFlavor:(id)arg1;
- (void)setMatchStatus:(id)arg1;
- (void)setPodcastEpisodeGUID:(id)arg1;
- (void)setRedownloadParams:(id)arg1;
- (void)setRedownloadStatus:(id)arg1;
- (void)setSagaID:(id)arg1;
- (void)setStoreMediaResponseItem:(id)arg1;
- (void)setStorefrontID:(id)arg1;
- (void)setSubscriptionID:(id)arg1;
- (void)setSyncID:(id)arg1;
- (void)setVersionID:(id)arg1;
- (void)setXID:(id)arg1;
- (id)storeMediaResponseItem;
- (id)storefrontID;
- (id)subscriptionID;
- (id)syncID;
- (id)versionID;

@end