
@interface AMSDeviceOffer : NSObject <AMSBagConsumer> {
    NSNumber * _adamId;
    NSString * _description;
    bool  _downgrading;
    NSNumber * _dsid;
    NSString * _offerIdentifier;
    NSSet * _serialNumbers;
    bool  _subscribed;
}

@property (nonatomic, copy) NSNumber *adamId;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *description;
@property (getter=isDowngrading, nonatomic) bool downgrading;
@property (nonatomic, copy) NSNumber *dsid;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *offerIdentifier;
@property (nonatomic, readonly) unsigned long long offerType;
@property (nonatomic, readonly) NSSet *serialNumbers;
@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (readonly) Class superclass;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)offersSetFromArray:(id)arg1;

- (void).cxx_destruct;
- (id)adamId;
- (id)description;
- (id)dsid;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithOfferIdentifier:(id)arg1;
- (bool)isDowngrading;
- (bool)isEqual:(id)arg1;
- (bool)isSubscribed;
- (id)offerIdentifier;
- (unsigned long long)offerType;
- (id)serialNumbers;
- (void)setAdamId:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setDowngrading:(bool)arg1;
- (void)setDsid:(id)arg1;
- (void)setOfferIdentifier:(id)arg1;
- (void)setSubscribed:(bool)arg1;

@end
