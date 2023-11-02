
@interface FCTagMetadata : NSObject {
    NSDictionary * _dictionary;
    NSString * _identifier;
    bool  _isArticleMetadata;
    NSString * _name;
    NSString * _nameImage;
    NSString * _nameImageForDarkBackground;
    NSString * _nameImageMask;
    NSString * _nameImageMetadata;
    unsigned long long  _tagType;
}

@property (nonatomic, readonly) NSString *coverImage;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *feedNavImage;
@property (nonatomic, readonly) NSString *feedNavImageHQ;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isArticleMetadata;
@property (nonatomic, readonly) bool isAthlete;
@property (nonatomic, readonly) bool isLocalNews;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nameImage;
@property (nonatomic, readonly) long long nameImageBaselineShift;
@property (nonatomic, retain) NSString *nameImageForDarkBackground;
@property (nonatomic, retain) NSString *nameImageMask;
@property (nonatomic, retain) NSString *nameImageMetadata;
@property (nonatomic, readonly) long long nameImageScaleFactor;
@property (nonatomic, readonly) NSString *publisherPaidAuthorizationURL;
@property (nonatomic, readonly) NSString *publisherPaidVerificationURL;
@property (nonatomic, readonly) NSString *sportsFullName;
@property (nonatomic, readonly) unsigned long long sportsLeagueType;
@property (nonatomic, readonly) NSString *sportsLogoImageCompact;
@property (nonatomic, readonly) NSString *sportsPrimaryColor;
@property (nonatomic, readonly) NSString *sportsPrimaryName;
@property (nonatomic, readonly) NSString *sportsSecondaryName;
@property (nonatomic, readonly) unsigned long long tagType;

- (void).cxx_destruct;
- (id)coverImage;
- (id)dictionary;
- (id)feedNavImage;
- (id)feedNavImageHQ;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 tagType:(unsigned long long)arg2 dictionary:(id)arg3 isArticleMetadata:(bool)arg4;
- (bool)isArticleMetadata;
- (bool)isAthlete;
- (bool)isLocalNews;
- (id)name;
- (id)nameImage;
- (long long)nameImageBaselineShift;
- (id)nameImageForDarkBackground;
- (id)nameImageMask;
- (id)nameImageMetadata;
- (long long)nameImageScaleFactor;
- (id)publisherPaidAuthorizationURL;
- (id)publisherPaidVerificationURL;
- (void)setDictionary:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsArticleMetadata:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNameImage:(id)arg1;
- (void)setNameImageForDarkBackground:(id)arg1;
- (void)setNameImageMask:(id)arg1;
- (void)setNameImageMetadata:(id)arg1;
- (id)sportsFullName;
- (unsigned long long)sportsLeagueType;
- (id)sportsLogoImageCompact;
- (id)sportsPrimaryColor;
- (id)sportsPrimaryName;
- (id)sportsSecondaryName;
- (unsigned long long)tagType;

@end
