
@interface AMSTreatment : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    NSString * _identifier;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndDate:(id)arg1 identifier:(id)arg2 startDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)startDate;

@end
