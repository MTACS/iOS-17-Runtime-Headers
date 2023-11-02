
@interface AMSLookupItem : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _itemDictionary;
}

@property (getter=isPOIBased, nonatomic, readonly) bool POIBased;
@property (nonatomic, readonly, copy) NSString *artistName;
@property (nonatomic, readonly, copy) NSArray *artwork;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *categoryNames;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSNumber *iTunesStoreIdentifier;
@property (nonatomic, readonly) NSDictionary *itemDictionary;
@property (nonatomic, readonly, copy) NSString *itemKind;
@property (nonatomic, readonly) long long numberOfUserRatings;
@property (nonatomic, readonly) long long numberOfUserRatingsForCurrentVersion;
@property (nonatomic, readonly, copy) NSString *offerName;
@property (nonatomic, readonly, copy) NSArray *offers;
@property (nonatomic, readonly, copy) NSURL *productPageURL;
@property (nonatomic, readonly) float userRating;
@property (nonatomic, readonly) float userRatingForCurrentVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artistName;
- (id)artwork;
- (id)bundleIdentifier;
- (id)categoryNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)iTunesStoreIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (bool)isPOIBased;
- (id)itemDictionary;
- (id)itemKind;
- (long long)numberOfUserRatings;
- (long long)numberOfUserRatingsForCurrentVersion;
- (id)offerName;
- (id)offers;
- (id)productPageURL;
- (float)userRating;
- (float)userRatingForCurrentVersion;

@end
