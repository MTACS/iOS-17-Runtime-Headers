
@interface FCPuzzle : NSObject <FCPuzzleProviding> {
    NSArray * _allowedStorefrontIDs;
    NSArray * _authors;
    NSArray * _blockedStorefrontIDs;
    NSString * _dataResourceID;
    bool  _deprecated;
    long long  _difficulty;
    NSString * _difficultyDescription;
    bool  _draft;
    NSString * _identifier;
    FCInterestToken * _interestToken;
    NSString * _language;
    NSDate * _loadDate;
    long long  _minimumNewsVersion;
    bool  _paid;
    NSDate * _publishDate;
    NSString * _puzzleDescription;
    <FCPuzzleTypeProviding> * _puzzleType;
    bool  _showInfoModalOnFirstPlay;
    NSString * _subtitle;
    NSString * _teaserAnswer;
    NSString * _teaserClue;
    NSString * _teaserDirection;
    NSString * _teaserInfo;
    NSString * _teaserNumber;
    FCAssetHandle * _thumbnailLargeImageAssetHandle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSArray *allowedStorefrontIDs;
@property (nonatomic, readonly, copy) NSArray *authors;
@property (nonatomic, readonly, copy) NSArray *blockedStorefrontIDs;
@property (nonatomic, readonly, copy) NSString *dataResourceID;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeprecated, nonatomic, readonly) bool deprecated;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long difficulty;
@property (nonatomic, readonly, copy) NSString *difficultyDescription;
@property (getter=isDraft, nonatomic, readonly) bool draft;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) FCInterestToken *interestToken;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly) NSDate *loadDate;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (getter=isPaid, nonatomic, readonly) bool paid;
@property (nonatomic, readonly, copy) NSDate *publishDate;
@property (nonatomic, readonly, copy) NSString *publishDateString;
@property (nonatomic, readonly, copy) NSString *puzzleDescription;
@property (nonatomic, readonly, retain) <FCPuzzleTypeProviding> *puzzleType;
@property (nonatomic, readonly) bool showInfoModalOnFirstPlay;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *teaserAnswer;
@property (nonatomic, readonly) NSString *teaserClue;
@property (nonatomic, readonly) NSString *teaserDirection;
@property (nonatomic, readonly) NSString *teaserInfo;
@property (nonatomic, readonly) NSString *teaserNumber;
@property (nonatomic, readonly) FCAssetHandle *thumbnailLargeImageAssetHandle;
@property (nonatomic, readonly) FCPuzzleThumbnailHandle *thumbnailSmallImageAssetHandle;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)allowedStorefrontIDs;
- (id)authors;
- (id)blockedStorefrontIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataResourceID;
- (long long)difficulty;
- (id)difficultyDescription;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 puzzleDescription:(id)arg4 puzzleType:(id)arg5 dataResourceID:(id)arg6 authors:(id)arg7 publishDate:(id)arg8 isPaid:(bool)arg9 difficulty:(long long)arg10 difficultyDescription:(id)arg11 thumbnailLargeImageAssetHandle:(id)arg12 loadDate:(id)arg13 teaserClue:(id)arg14 teaserAnswer:(id)arg15 teaserInfo:(id)arg16 teaserDirection:(id)arg17 teaserNumber:(id)arg18 language:(id)arg19 blockedStorefrontIDs:(id)arg20 allowedStorefrontIDs:(id)arg21 minimumNewsVersion:(long long)arg22 showInfoModalOnFirstPlay:(bool)arg23 isDeprecated:(bool)arg24 isDraft:(bool)arg25;
- (id)initWithPuzzle:(id)arg1 overrides:(id)arg2;
- (id)initWithPuzzleRecord:(id)arg1 puzzleType:(id)arg2 assetManager:(id)arg3 interestToken:(id)arg4 difficultyDescriptions:(id)arg5;
- (id)interestToken;
- (bool)isDeprecated;
- (bool)isDraft;
- (bool)isPaid;
- (id)language;
- (id)loadDate;
- (long long)minimumNewsVersion;
- (id)publishDate;
- (id)publishDateString;
- (id)puzzleDescription;
- (id)puzzleType;
- (bool)showInfoModalOnFirstPlay;
- (id)subtitle;
- (id)teaserAnswer;
- (id)teaserClue;
- (id)teaserDirection;
- (id)teaserInfo;
- (id)teaserNumber;
- (id)thumbnailLargeImageAssetHandle;
- (id)thumbnailSmallImageAssetHandle;
- (id)title;

@end