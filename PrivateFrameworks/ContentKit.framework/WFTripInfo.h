
@interface WFTripInfo : NSObject <NSSecureCoding, WFNaming> {
    NSMeasurement * _distance;
    WFTimeInterval * _expectedTravelTime;
    NSString * _routeName;
}

@property (nonatomic, readonly) NSMeasurement *distance;
@property (nonatomic, readonly) WFTimeInterval *expectedTravelTime;
@property (nonatomic, readonly) NSString *routeName;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedTravelTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithMKRoute:(id)arg1;
- (id)routeName;
- (id)wfName;

@end
