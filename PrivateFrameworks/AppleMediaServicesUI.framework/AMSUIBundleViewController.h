
@interface AMSUIBundleViewController : AMSUIDynamicViewController <AMSBagConsumer> {
    NSString * _placement;
    NSString * _serviceType;
    ACAccount * account;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *placement;
@property (nonatomic, retain) NSString *serviceType;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;

- (void).cxx_destruct;
- (id)account;
- (id)initWithServiceType:(id)arg1 placement:(id)arg2 account:(id)arg3 bag:(id)arg4;
- (id)placement;
- (id)serviceType;
- (void)setAccount:(id)arg1;
- (void)setPlacement:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
