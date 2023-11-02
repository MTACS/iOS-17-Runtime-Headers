
@interface AMSNetworkConstraints : NSObject <AMSBagConsumer> {
    NSMutableDictionary * _sizeLimits;
}

@property (getter=isAnyNetworkTypeEnabled, readonly) bool anyNetworkTypeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *sizeLimits;
@property (readonly) Class superclass;

+ (id)_networkConstraintsForMediaType:(id)arg1 withArray:(id)arg2;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)networkConstraintsForMediaType:(id)arg1 withBag:(id)arg2;

- (void).cxx_destruct;
- (void)_disableAllNetworkTypes;
- (id)_initWithStoreConstraintDictionary:(id)arg1;
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(id)arg2;
- (long long)_sizeLimitForNetworkType:(id)arg1;
- (id)description;
- (bool)hasSizeLimitForNetworkType:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isAnyNetworkTypeEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConstraints:(id)arg1;
- (void)setSizeLimits:(id)arg1;
- (long long)sizeLimitForNetworkType:(id)arg1;
- (id)sizeLimits;

@end
