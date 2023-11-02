
@interface PXContextualMemoriesOptions : NSObject {
    double  _accuracy;
    NSDate * _peopleProximityDate;
}

@property (nonatomic) double accuracy;
@property (nonatomic, retain) NSDate *peopleProximityDate;

- (void).cxx_destruct;
- (double)accuracy;
- (id)init;
- (id)peopleProximityDate;
- (void)setAccuracy:(double)arg1;
- (void)setPeopleProximityDate:(id)arg1;

@end
