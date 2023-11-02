
@interface AMSUIMarketingItemViewController : AMSUIDynamicViewController <AMSBagConsumer> {
    NSDictionary * _contextInfo;
    NSString * _placement;
    NSString * _serviceType;
}

@property (nonatomic, copy) NSDictionary *contextInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *offerHints;
@property (nonatomic, retain) NSString *placement;
@property (nonatomic, retain) NSString *seed;
@property (nonatomic, retain) NSString *serviceType;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_setInternalClientOptionsValue:(id)arg1 forKey:(id)arg2;
- (id)contextInfo;
- (id)initWithMarketingItem:(id)arg1 bag:(id)arg2;
- (id)initWithServiceType:(id)arg1 placement:(id)arg2 account:(id)arg3 bag:(id)arg4;
- (id)initWithServiceType:(id)arg1 placement:(id)arg2 bag:(id)arg3;
- (id)offerHints;
- (id)placement;
- (id)seed;
- (id)serviceType;
- (void)setContextInfo:(id)arg1;
- (void)setOfferHints:(id)arg1;
- (void)setPlacement:(id)arg1;
- (void)setSeed:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
