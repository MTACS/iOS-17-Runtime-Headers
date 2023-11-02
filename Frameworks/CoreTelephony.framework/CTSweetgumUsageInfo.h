
@interface CTSweetgumUsageInfo : NSObject <NSSecureCoding> {
    NSArray * _accountMetrics;
}

@property (nonatomic, retain) NSArray *accountMetrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountMetrics;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAccountMetrics:(id)arg1;

@end
