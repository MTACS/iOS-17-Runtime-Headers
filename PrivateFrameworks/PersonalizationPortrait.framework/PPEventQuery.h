
@interface PPEventQuery : NSObject <NSSecureCoding> {
    NSDate * _fromDate;
    NSDate * _toDate;
}

@property (nonatomic, retain) NSDate *fromDate;
@property (nonatomic, retain) NSDate *toDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fromDate;
- (id)initWithCoder:(id)arg1;
- (void)setFromDate:(id)arg1;
- (void)setToDate:(id)arg1;
- (id)toDate;

@end
