
@interface EDAMPremiumInfo : FATObject {
    NSNumber * _canPurchaseUploadAllowance;
    NSNumber * _currentTime;
    NSNumber * _premium;
    NSNumber * _premiumCancellationPending;
    NSNumber * _premiumExpirationDate;
    NSNumber * _premiumExtendable;
    NSNumber * _premiumPending;
    NSNumber * _premiumRecurring;
    NSNumber * _premiumUpgradable;
    NSString * _sponsoredGroupName;
    NSNumber * _sponsoredGroupRole;
}

@property (nonatomic, retain) NSNumber *canPurchaseUploadAllowance;
@property (nonatomic, retain) NSNumber *currentTime;
@property (nonatomic, retain) NSNumber *premium;
@property (nonatomic, retain) NSNumber *premiumCancellationPending;
@property (nonatomic, retain) NSNumber *premiumExpirationDate;
@property (nonatomic, retain) NSNumber *premiumExtendable;
@property (nonatomic, retain) NSNumber *premiumPending;
@property (nonatomic, retain) NSNumber *premiumRecurring;
@property (nonatomic, retain) NSNumber *premiumUpgradable;
@property (nonatomic, retain) NSString *sponsoredGroupName;
@property (nonatomic, retain) NSNumber *sponsoredGroupRole;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)canPurchaseUploadAllowance;
- (id)currentTime;
- (id)premium;
- (id)premiumCancellationPending;
- (id)premiumExpirationDate;
- (id)premiumExtendable;
- (id)premiumPending;
- (id)premiumRecurring;
- (id)premiumUpgradable;
- (void)setCanPurchaseUploadAllowance:(id)arg1;
- (void)setCurrentTime:(id)arg1;
- (void)setPremium:(id)arg1;
- (void)setPremiumCancellationPending:(id)arg1;
- (void)setPremiumExpirationDate:(id)arg1;
- (void)setPremiumExtendable:(id)arg1;
- (void)setPremiumPending:(id)arg1;
- (void)setPremiumRecurring:(id)arg1;
- (void)setPremiumUpgradable:(id)arg1;
- (void)setSponsoredGroupName:(id)arg1;
- (void)setSponsoredGroupRole:(id)arg1;
- (id)sponsoredGroupName;
- (id)sponsoredGroupRole;

@end
