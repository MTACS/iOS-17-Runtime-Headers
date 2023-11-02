
@interface BKSHIDTouchRoutingPolicy : NSObject <NSSecureCoding> {
    BSMutableSettings * _settings;
}

@property (getter=shouldAvoidHitTesting, nonatomic) bool avoidHitTesting;
@property (nonatomic, copy) NSArray *contextIDsToAlwaysSendTouches;
@property (nonatomic, copy) NSArray *contextIDsToExcludeFromHitTesting;
@property (nonatomic, retain) BSMutableSettings *settings;

+ (void)inspectChangesWithOldPolicy:(id)arg1 newPolicy:(id)arg2 usingBlock:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextIDsToAlwaysSendTouches;
- (id)contextIDsToExcludeFromHitTesting;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAvoidHitTesting:(bool)arg1;
- (void)setContextIDsToAlwaysSendTouches:(id)arg1;
- (void)setContextIDsToExcludeFromHitTesting:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;
- (bool)shouldAvoidHitTesting;

@end
