
@interface ASCAppOffer : NSObject <ASCOffer, NSCopying, NSSecureCoding> {
    NSDictionary * _additionalHeaders;
    NSNumber * _ageRating;
    NSString * _baseBuyParams;
    NSString * _bundleID;
    long long  _flags;
    ASCAdamID * _id;
    NSString * _itemName;
    NSArray * _metrics;
    NSString * _metricsBuyParams;
    NSURL * _preflightPackageURL;
    NSDictionary * _subtitles;
    NSDictionary * _titles;
    NSString * _vendorName;
}

@property (nonatomic, readonly, copy) NSDictionary *additionalHeaders;
@property (nonatomic, readonly) NSNumber *ageRating;
@property (nonatomic, readonly, copy) NSString *baseBuyParams;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) ASCAdamID *id;
@property (nonatomic, readonly, copy) NSString *itemName;
@property (nonatomic, readonly) NSArray *metrics;
@property (nonatomic, readonly, copy) NSString *metricsBuyParams;
@property (nonatomic, readonly, copy) NSURL *preflightPackageURL;
@property (nonatomic, readonly, copy) NSDictionary *subtitles;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *titles;
@property (nonatomic, readonly, copy) NSString *vendorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalHeaders;
- (id)ageRating;
- (id)baseBuyParams;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)flags;
- (unsigned long long)hash;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 baseBuyParams:(id)arg7 metricsBuyParams:(id)arg8 additionalHeaders:(id)arg9 preflightPackageURL:(id)arg10 bundleID:(id)arg11 itemName:(id)arg12 vendorName:(id)arg13;
- (bool)isEqual:(id)arg1;
- (id)itemName;
- (id)metrics;
- (id)metricsBuyParams;
- (id)offerWithMetrics:(id)arg1;
- (id)preflightPackageURL;
- (id)subtitles;
- (id)titles;
- (id)vendorName;

@end
