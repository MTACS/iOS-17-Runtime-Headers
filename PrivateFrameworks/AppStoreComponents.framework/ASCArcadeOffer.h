
@interface ASCArcadeOffer : NSObject <ASCOffer, NSSecureCoding> {
    NSNumber * _ageRating;
    long long  _flags;
    ASCAdamID * _id;
    NSArray * _metrics;
    <ASCOffer> * _notSubscribedOffer;
    <ASCOffer> * _subscribedOffer;
    NSDictionary * _subtitles;
    NSDictionary * _titles;
}

@property (nonatomic, readonly) NSNumber *ageRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) ASCAdamID *id;
@property (nonatomic, readonly) NSArray *metrics;
@property (nonatomic, readonly) <ASCOffer> *notSubscribedOffer;
@property (nonatomic, readonly) <ASCOffer> *subscribedOffer;
@property (nonatomic, readonly, copy) NSDictionary *subtitles;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *titles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ageRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)flags;
- (unsigned long long)hash;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 notSubscribedOffer:(id)arg7 subscribedOffer:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (id)notSubscribedOffer;
- (id)offerWithMetrics:(id)arg1;
- (id)subscribedOffer;
- (id)subtitles;
- (id)titles;

@end
