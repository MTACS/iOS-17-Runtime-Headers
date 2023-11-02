
@interface ATXScreenLogUnlockSessionContext : NSObject <NSSecureCoding> {
    ATXHomeScreenLogUnlockSessionManager * _unlockSessionManager;
}

@property (nonatomic, retain) ATXHomeScreenLogUnlockSessionManager *unlockSessionManager;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnlockSessionManager:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXScreenLogUnlockSessionContext:(id)arg1;
- (void)setUnlockSessionManager:(id)arg1;
- (id)unlockSessionManager;
- (void)updateWithBlendingUICacheUpdate:(id)arg1;
- (void)updateWithClientModelCacheUpdate:(id)arg1;
- (void)updateWithUIEvent:(id)arg1;

@end
