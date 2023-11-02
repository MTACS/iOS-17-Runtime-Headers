
@protocol BFMAsset <BFMResource>

@required

- (NSString *)artistName;
- (NSString *)artworkURL;
- (double)averageRating;
- (NSURL *)bookSampleDownloadURL;
- (NSString *)buyParams;
- (NSString *)contentRating;
- (NSDate *)expectedReleaseDate;
- (long long)fileSize;
- (NSString *)genre;
- (bool)hasSupplementalContent;
- (NSNumber *)height;
- (bool)isAudiobook;
- (bool)isBook;
- (bool)isExplicit;
- (bool)isPreorder;
- (bool)isSG;
- (NSString *)name;
- (NSDictionary *)offer;
- (NSString *)pageProgressionDirection;
- (bool)pagesAreRTL;
- (NSURL *)previewURL;
- (NSNumber *)price;
- (NSString *)priceFormatted;
- (unsigned long long)ratingCount;
- (unsigned long long)ratingCountForAnalytics;
- (NSDate *)releaseDate;
- (NSString *)sequenceDisplayLabel;
- (NSDecimalNumber *)sequenceNumber;
- (NSString *)seriesName;
- (<BFMSeries> *)seriesResource;
- (NSString *)standardDescription;
- (NSString *)standardNotes;
- (NSURL *)url;
- (NSString *)version;
- (NSNumber *)width;

@end
