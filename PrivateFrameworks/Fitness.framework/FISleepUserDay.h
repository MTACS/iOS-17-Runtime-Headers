
@interface FISleepUserDay : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    NSDate * _endOfDay;
    NSDate * _startOfDay;
}

@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *endOfDay;
@property (nonatomic, copy) NSDate *startOfDay;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)endOfDay;
- (id)initEmptySleepUserDay;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartOfDay:(id)arg1 endOfDay:(id)arg2;
- (bool)isEmpty;
- (void)setCreationDate:(id)arg1;
- (void)setEndOfDay:(id)arg1;
- (void)setStartOfDay:(id)arg1;
- (id)startOfDay;

@end
