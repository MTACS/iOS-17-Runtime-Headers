
@interface ARDepthSensorSettings : ARImageSensorSettings {
    NSString * _timeOfFlightProjectorMode;
}

@property (nonatomic, retain) NSString *timeOfFlightProjectorMode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithVideoFormat:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTimeOfFlightProjectorMode:(id)arg1;
- (id)timeOfFlightProjectorMode;

@end
