
@interface INMediaUserContext : INUserContext {
    NSNumber * _numberOfLibraryItems;
    long long  _subscriptionStatus;
}

@property (nonatomic, copy) NSNumber *numberOfLibraryItems;
@property (nonatomic) long long subscriptionStatus;

+ (id)_sharedFormatter;
+ (long long)_type;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)numberOfLibraryItems;
- (id)safeLibraryItems;
- (void)setNumberOfLibraryItems:(id)arg1;
- (void)setSubscriptionStatus:(long long)arg1;
- (long long)subscriptionStatus;

@end
