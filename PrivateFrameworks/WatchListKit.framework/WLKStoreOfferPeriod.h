
@interface WLKStoreOfferPeriod : NSObject {
    NSNumber * _duration;
    NSString * _type;
}

@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)_offerPeriodForString:(id)arg1;
- (id)duration;
- (id)initWithString:(id)arg1;
- (id)type;

@end
