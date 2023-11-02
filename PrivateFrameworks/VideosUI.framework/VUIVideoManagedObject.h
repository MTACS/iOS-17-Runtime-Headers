
@interface VUIVideoManagedObject : NSManagedObject

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic, readonly) NSDictionary *additionalFPSRequestParams;
@property (nonatomic, retain) NSData *additionalFPSRequestParamsJSONData;
@property (nonatomic) bool allowsCellular;
@property (nonatomic) bool allowsManualRenewal;
@property (nonatomic, copy) NSDate *availabilityEndDate;
@property (nonatomic, copy) NSNumber *bookmarkTime;
@property (nonatomic, copy) NSDate *bookmarkTimeStamp;
@property (nonatomic, copy) NSString *brandID;
@property (nonatomic, copy) NSString *brandName;
@property (nonatomic, copy) NSString *buyParams;
@property (nonatomic, copy) NSString *canonicalID;
@property (nonatomic, copy) NSString *contentRatingDomain;
@property (nonatomic, copy) NSNumber *contentRatingRank;
@property (nonatomic, copy) NSDate *dateAdded;
@property (nonatomic) bool downloadFailedDueToError;
@property (nonatomic, retain) NSData *downloadQOSMetricsJSONData;
@property (nonatomic) long long downloadState;
@property (nonatomic, copy) NSNumber *downloadTaskIdentifier;
@property (nonatomic, copy) NSURL *downloadURL;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic, copy) NSNumber *entitlementType;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSURL *fpsCertificateURL;
@property (nonatomic, retain) NSSet *fpsKeyInfo;
@property (nonatomic, copy) NSURL *fpsKeyServerURL;
@property (nonatomic, copy) NSURL *fpsNonceURL;
@property (nonatomic, copy) NSNumber *frequencyOfAgeConfirmation;
@property (nonatomic, copy) NSString *genreName;
@property (nonatomic) bool hasExpirationDate;
@property (nonatomic, retain) NSSet *imageInfos;
@property (nonatomic) bool isAdultContent;
@property (nonatomic, copy) NSString *localPlaybackRelativeFilePath;
@property (nonatomic, copy) NSURL *localPlaybackURL;
@property (nonatomic, copy) NSNumber *mainContentRelativeBookmarkTime;
@property (nonatomic, copy) NSDate *mainContentRelativeBookmarkTimeStamp;
@property (nonatomic) bool markedAsDeleted;
@property (nonatomic, copy) NSString *mediaDescription;
@property (nonatomic, readonly) NSDictionary *mediaMetrics;
@property (nonatomic, retain) NSData *mediaMetricsJSONData;
@property (nonatomic, copy) NSNumber *offlineKeyRenewalPolicy;
@property (nonatomic, readonly) NSArray *playbackModes;
@property (nonatomic, retain) NSData *playbackModesJSONData;
@property (nonatomic, copy) NSURL *playbackURL;
@property (nonatomic, retain) NSData *redownloadProductResponse;
@property (nonatomic, retain) NSDictionary *redownloadProductResponseDictionary;
@property (nonatomic, copy) NSString *referenceID;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, copy) NSNumber *rentalID;
@property (nonatomic, copy) NSDate *rentalPlaybackStartDate;
@property (nonatomic, copy) NSNumber *requiredAgeForPlayback;
@property (nonatomic, copy) NSString *rtcServiceIdentifier;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic) bool shouldMarkAsDeletedAfterCancellationOrFailure;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSData *vpafMetricsJSONData;

+ (id)keyPathsForValuesAffectingExpirationDate;
+ (id)keyPathsForValuesAffectingLocalPlaybackURL;

- (id)additionalFPSRequestParams;
- (id)expirationDate;
- (id)localPlaybackURL;
- (id)mediaMetrics;
- (id)playbackModes;
- (id)redownloadProductResponseDictionary;
- (void)setLocalPlaybackURL:(id)arg1;
- (void)setRedownloadProductResponseDictionary:(id)arg1;

@end
