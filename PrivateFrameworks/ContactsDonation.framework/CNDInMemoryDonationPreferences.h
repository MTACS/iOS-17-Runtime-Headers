
@interface CNDInMemoryDonationPreferences : NSObject <CNDDonationPreferences> {
    bool  _donationsEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDonationsEnabled, nonatomic) bool donationsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3;

- (bool)isDonationsEnabled;
- (void)setDonationsEnabled:(bool)arg1;

@end
