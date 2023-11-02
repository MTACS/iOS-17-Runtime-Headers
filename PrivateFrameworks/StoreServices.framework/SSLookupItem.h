
@interface SSLookupItem : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSNumber *ITunesStoreIdentifier;
@property (getter=isPOIBased, nonatomic, readonly) bool POIBased;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSArray *artwork;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSArray *categoryNames;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *itemKind;
@property (nonatomic, readonly) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) long long numberOfUserRatings;
@property (nonatomic, readonly) long long numberOfUserRatingsForCurrentVersion;
@property (nonatomic, readonly) NSArray *offers;
@property (nonatomic, readonly) NSURL *productPageURL;
@property (nonatomic, readonly) float userRating;
@property (nonatomic, readonly) float userRatingForCurrentVersion;

+ (bool)supportsSecureCoding;

- (id)ITunesStoreIdentifier;
- (id)artistName;
- (id)artwork;
- (id)bundleIdentifier;
- (id)categoryNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (bool)isPOIBased;
- (id)itemKind;
- (id)lookupDictionary;
- (long long)numberOfUserRatings;
- (long long)numberOfUserRatingsForCurrentVersion;
- (id)offers;
- (id)productPageURL;
- (float)userRating;
- (float)userRatingForCurrentVersion;

@end
