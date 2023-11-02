
@interface SUScriptDeviceOffer : SUScriptObject {
    AMSDeviceOffer * _offer;
}

@property (nonatomic, readonly) NSNumber *adamId;
@property (nonatomic, readonly) NSString *description;
@property (getter=isDowngrading, nonatomic, readonly) id downgrading;
@property (nonatomic, readonly) AMSDeviceOffer *nativeOffer;
@property (nonatomic, retain) AMSDeviceOffer *offer;
@property (nonatomic, readonly) unsigned long long offerType;
@property (getter=isSubscribed, nonatomic, readonly) id subscribed;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void).cxx_destruct;
- (id)_className;
- (id)adamId;
- (id)attributeKeys;
- (id)description;
- (id)initWithDeviceOffer:(id)arg1;
- (id)isDowngrading;
- (id)isSubscribed;
- (id)nativeOffer;
- (id)offer;
- (unsigned long long)offerType;
- (id)scriptAttributeKeys;
- (void)setAdamId:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setDowngrading:(id)arg1;
- (void)setOffer:(id)arg1;
- (void)setOfferType:(unsigned long long)arg1;
- (void)setSubscribed:(id)arg1;

@end
