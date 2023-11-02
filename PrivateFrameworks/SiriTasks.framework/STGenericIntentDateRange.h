
@interface STGenericIntentDateRange : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    NSString * _name;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (id)startDate;

@end
