
@interface HDDemoDataRespirationRate : NSObject {
    NSDate * _date;
    NSNumber * _rate;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSNumber *rate;

- (void).cxx_destruct;
- (id)date;
- (id)rate;
- (void)setDate:(id)arg1;
- (void)setRate:(id)arg1;

@end
