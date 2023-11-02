
@interface MNNavigationTraceInfo : NSObject {
    NSString * _pedestrianTracePath;
    double  _pedestrianTraceStartRelativeTimestamp;
}

@property (nonatomic, copy) NSString *pedestrianTracePath;
@property (nonatomic) double pedestrianTraceStartRelativeTimestamp;

- (void).cxx_destruct;
- (id)pedestrianTracePath;
- (double)pedestrianTraceStartRelativeTimestamp;
- (void)setPedestrianTracePath:(id)arg1;
- (void)setPedestrianTraceStartRelativeTimestamp:(double)arg1;

@end
