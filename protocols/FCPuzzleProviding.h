
@protocol FCPuzzleProviding <NSObject, NFCopying>

@required

- (NSArray *)allowedStorefrontIDs;
- (NSArray *)authors;
- (NSArray *)blockedStorefrontIDs;
- (NSString *)dataResourceID;
- (long long)difficulty;
- (NSString *)difficultyDescription;
- (NSString *)identifier;
- (bool)isDeprecated;
- (bool)isDraft;
- (bool)isPaid;
- (NSString *)language;
- (NSDate *)loadDate;
- (long long)minimumNewsVersion;
- (NSDate *)publishDate;
- (NSString *)publishDateString;
- (NSString *)puzzleDescription;
- (<FCPuzzleTypeProviding> *)puzzleType;
- (bool)showInfoModalOnFirstPlay;
- (NSString *)subtitle;
- (NSString *)teaserAnswer;
- (NSString *)teaserClue;
- (NSString *)teaserDirection;
- (NSString *)teaserInfo;
- (NSString *)teaserNumber;
- (FCAssetHandle *)thumbnailLargeImageAssetHandle;
- (FCPuzzleThumbnailHandle *)thumbnailSmallImageAssetHandle;
- (NSString *)title;

@end
