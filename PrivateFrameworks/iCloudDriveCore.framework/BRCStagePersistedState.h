
@interface BRCStagePersistedState : BRCPersistedState {
    long long  _latestGCStartTime;
}

+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatestGCStartTime:(long long)arg1;
- (long long)timeSinceLatestGCStartTime;

@end
