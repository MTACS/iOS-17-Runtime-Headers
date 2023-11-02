
@interface MNTraceEVDataRow : NSObject <MNTracePlayerTimelineStreamObjectType> {
    double  _timestamp;
    VGVehicle * _vehicle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double position;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) VGVehicle *vehicle;

- (void).cxx_destruct;
- (double)position;
- (void)setTimestamp:(double)arg1;
- (void)setVehicle:(id)arg1;
- (double)timestamp;
- (id)vehicle;

@end
