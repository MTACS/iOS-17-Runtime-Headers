
@interface MPAVBatteryLevel : NSObject {
    NSNumber * _casePercentage;
    NSNumber * _leftPercentage;
    NSNumber * _rightPercentage;
    NSNumber * _singlePercentage;
}

@property (nonatomic, readonly) NSNumber *casePercentage;
@property (nonatomic, readonly) NSNumber *leftPercentage;
@property (nonatomic, readonly) NSNumber *rightPercentage;
@property (nonatomic, readonly) NSNumber *singlePercentage;

- (void).cxx_destruct;
- (id)casePercentage;
- (id)description;
- (id)initWithOutputDevice:(void*)arg1;
- (id)initWithRouteDescription:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)leftPercentage;
- (id)rightPercentage;
- (id)singlePercentage;

@end
