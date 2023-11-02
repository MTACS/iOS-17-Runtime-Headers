
@protocol FCFeedPersonalizingItem <NSObject>

@required

- (void)enumerateTopicCohortsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *, void*
- (void)enumerateTopicConversionStatsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *, void*
- (COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
- (COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)globalConversionStats;
- (double)globalUserFeedback;
- (unsigned long long)halfLife;
- (bool)hasGlobalUserFeedback;
- (bool)hasThumbnail;
- (bool)hasVideo;
- (bool)isANF;
- (bool)isHiddenFromAutoFavorites;
- (bool)isPaid;
- (NSString *)itemID;
- (NSDate *)publishDate;
- (COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
- (COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)publisherConversionStats;
- (NSString *)publisherID;
- (COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *)publisherTagMetadata;
- (FCFeedPersonalizedItemScoreProfile *)scoreProfile;
- (void)setScoreProfile:(FCFeedPersonalizedItemScoreProfile *)arg1;
- (NSString *)sourceFeedID;
- (NSArray *)topicIDs;
- (NSArray *)topics;

@optional

- (long long)bodyTextLength;
- (NSString *)clusterID;
- (COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration *)expirationData;
- (NSData *)float16FullBodyEncoding;
- (NSData *)float16TitleEncoding;
- (unsigned long long)halfLifeOverride;
- (bool)hasAudioTrack;
- (NSArray *)iAdCategories;
- (bool)isBundlePaid;
- (bool)isEvergreen;
- (bool)isFeatureCandidate;
- (bool)isFeatured;
- (NSString *)language;
- (bool)reduceVisibility;
- (NSData *)thumbnailPerceptualHash;
- (bool)webConverted;

@end
