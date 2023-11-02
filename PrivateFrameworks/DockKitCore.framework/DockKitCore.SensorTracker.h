
@interface DockKitCore.SensorTracker : DockKitCore.Sensor {
    void state;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) _TtC11DockKitCore18SensorTrackerState *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
