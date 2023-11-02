
@interface WFDetectedDate : NSObject <NSSecureCoding> {
    NSDate * _date;
    bool  _timeIsSignificant;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) bool timeIsSignificant;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 timeIsSignificant:(bool)arg2;
- (id)initWithDateCheckingResult:(id)arg1;
- (bool)timeIsSignificant;

@end
