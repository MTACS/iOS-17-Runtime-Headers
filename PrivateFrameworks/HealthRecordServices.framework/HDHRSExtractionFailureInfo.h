
@interface HDHRSExtractionFailureInfo : NSObject <NSSecureCoding> {
    NSMutableArray * _failureRecords;
}

@property (nonatomic, readonly, copy) NSArray *failureRecords;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addFailureRecord:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)failureRecords;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
