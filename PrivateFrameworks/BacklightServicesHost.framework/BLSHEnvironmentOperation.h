
@interface BLSHEnvironmentOperation : NSObject {
    long long  _backlightState;
}

@property (nonatomic, readonly) long long backlightState;

- (long long)backlightState;
- (id)description;
- (id)initWithBacklightState:(long long)arg1;

@end
