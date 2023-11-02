
@interface DockKitCore.SensorTrackerState : DockKitCore.SensorData {
    void state;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(long long)arg1;

@end
