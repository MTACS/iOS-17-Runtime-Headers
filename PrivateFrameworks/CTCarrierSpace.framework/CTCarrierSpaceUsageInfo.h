
@interface CTCarrierSpaceUsageInfo : NSObject <NSSecureCoding> {
    NSArray * _accountMetrics;
    NSString * _moreDetailsURL;
}

@property (nonatomic, retain) NSArray *accountMetrics;
@property (nonatomic, retain) NSString *moreDetailsURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountMetrics;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)moreDetailsURL;
- (void)setAccountMetrics:(id)arg1;
- (void)setMoreDetailsURL:(id)arg1;

@end
