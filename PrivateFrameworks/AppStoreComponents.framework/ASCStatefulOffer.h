
@interface ASCStatefulOffer : NSObject <ASCOffer, NSSecureCoding> {
    NSNumber * _ageRating;
    <ASCOffer> * _buyOffer;
    <ASCOffer> * _defaultOffer;
    long long  _flags;
    ASCAdamID * _id;
    NSArray * _metrics;
    <ASCOffer> * _openOffer;
    NSDictionary * _subtitles;
    NSDictionary * _titles;
}

@property (nonatomic, readonly) NSNumber *ageRating;
@property (nonatomic, readonly, copy) <ASCOffer> *buyOffer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) <ASCOffer> *defaultOffer;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) ASCAdamID *id;
@property (nonatomic, readonly) NSArray *metrics;
@property (nonatomic, readonly, copy) <ASCOffer> *openOffer;
@property (nonatomic, readonly, copy) NSDictionary *subtitles;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *titles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ageRating;
- (id)buyOffer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultOffer;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)flags;
- (unsigned long long)hash;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 defaultOffer:(id)arg7 buyOffer:(id)arg8 openOffer:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (id)offerWithMetrics:(id)arg1;
- (id)openOffer;
- (id)subtitles;
- (id)titles;

@end
