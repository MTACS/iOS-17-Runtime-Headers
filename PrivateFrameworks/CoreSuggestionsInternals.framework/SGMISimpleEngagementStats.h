
@interface SGMISimpleEngagementStats : NSObject {
    NSNumber * _negativeEngagement;
    NSNumber * _noEngagement;
    NSNumber * _positiveEngagement;
}

@property (nonatomic, readonly) NSNumber *negativeEngagement;
@property (nonatomic, readonly) NSNumber *noEngagement;
@property (nonatomic, readonly) NSNumber *positiveEngagement;

- (void).cxx_destruct;
- (id)initWithPositiveEngagement:(id)arg1 noEngagement:(id)arg2 negativeEngagement:(id)arg3;
- (id)negativeEngagement;
- (id)noEngagement;
- (id)positiveEngagement;

@end
