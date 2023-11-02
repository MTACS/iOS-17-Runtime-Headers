
@interface DockKitCore.SensorLEDState : DockKitCore.SensorData {
    void brightness;
    void color;
    void state;
}

@property (nonatomic) double brightness;
@property (nonatomic) double color;
@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (double)brightness;
- (double)color;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(long long)arg1 brightness:(double)arg2 color:(double)arg3;
- (void)setBrightness:(double)arg1;
- (void)setColor:(double)arg1;

@end
