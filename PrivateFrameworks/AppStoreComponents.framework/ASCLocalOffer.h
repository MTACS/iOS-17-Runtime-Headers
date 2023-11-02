
@interface ASCLocalOffer : NSObject <ASCOffer, NSCopying> {
    id /* block */  _action;
    ASCOfferMetadata * _metadata;
}

@property (nonatomic, readonly, copy) id /* block */ action;
@property (nonatomic, readonly) NSNumber *ageRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) ASCAdamID *id;
@property (nonatomic, readonly) ASCOfferMetadata *metadata;
@property (nonatomic, readonly) NSArray *metrics;
@property (nonatomic, readonly, copy) NSDictionary *subtitles;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *titles;

+ (id)viewInAppStoreOfferForLockupView:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)ageRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)flags;
- (id)formattedPrice;
- (unsigned long long)hash;
- (id)id;
- (id)initWithMetadata:(id)arg1 action:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)metrics;
- (id)offerWithMetrics:(id)arg1;
- (id)price;
- (id)subtitles;
- (id)titles;

@end
