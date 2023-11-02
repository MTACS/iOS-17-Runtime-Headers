
@protocol MTFeedEpisode

@required

- (NSString *)artworkBackgroundColor;
- (double)artworkHeight;
- (NSString *)artworkTemplateURL;
- (NSString *)artworkTextPrimaryColor;
- (NSString *)artworkTextQuaternaryColor;
- (NSString *)artworkTextSecondaryColor;
- (NSString *)artworkTextTertiaryColor;
- (double)artworkWidth;
- (NSString *)author;
- (unsigned long long)byteSize;
- (NSString *)category;
- (double)duration;
- (NSString *)enclosureURL;
- (double)entitledDuration;
- (NSString *)entitledEnclosureURL;
- (NSString *)entitledPriceType;
- (long long)episodeNumber;
- (NSString *)episodeStoreId;
- (NSString *)episodeType;
- (NSDate *)firstTimeAvailableAsFree;
- (NSDate *)firstTimeAvailableAsPaid;
- (NSString *)guid;
- (bool)isExplicit;
- (NSString *)itemDescription;
- (NSString *)itemSummary;
- (NSString *)itunesTitle;
- (NSString *)priceType;
- (NSDate *)pubDate;
- (NSString *)resolvedEnclosureUrl;
- (long long)seasonNumber;
- (NSString *)title;
- (unsigned int)trackNum;
- (NSString *)uti;
- (NSString *)webpageURL;

@end
