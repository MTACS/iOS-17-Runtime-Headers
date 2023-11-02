
@interface _RERoutineData : NSObject <REAutomaticExportedInterface> {
    NSArray * _locationsOfInterest;
    long long  _mode;
}

@property (nonatomic, retain) NSArray *locationsOfInterest;
@property (nonatomic) long long mode;

- (void).cxx_destruct;
- (id)description;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRoutineData:(id)arg1;
- (id)locationsOfInterest;
- (long long)mode;
- (void)setLocationsOfInterest:(id)arg1;
- (void)setMode:(long long)arg1;

@end
