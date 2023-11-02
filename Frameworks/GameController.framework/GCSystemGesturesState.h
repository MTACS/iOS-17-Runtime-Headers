
@interface GCSystemGesturesState : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSSet * _disabledSystemGestureInputNames;
    NSSet * _enabledSystemGestureInputNames;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSSet *disabledSystemGestureInputNames;
@property (nonatomic, retain) NSSet *enabledSystemGestureInputNames;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (id)disabledSystemGestureInputNames;
- (id)enabledSystemGestureInputNames;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledSystemGestures:(id)arg1 disabledSystemGestures:(id)arg2 bundleIdentifier:(id)arg3;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDisabledSystemGestureInputNames:(id)arg1;
- (void)setEnabledSystemGestureInputNames:(id)arg1;

@end
