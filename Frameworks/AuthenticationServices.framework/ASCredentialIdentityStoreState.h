
@interface ASCredentialIdentityStoreState : NSObject {
    bool  _enabled;
    bool  _supportsIncrementalUpdates;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) bool supportsIncrementalUpdates;

- (id)description;
- (id)initWithEnabledState:(bool)arg1 supportsIncrementalUpdates:(bool)arg2;
- (bool)isEnabled;
- (bool)supportsIncrementalUpdates;

@end
