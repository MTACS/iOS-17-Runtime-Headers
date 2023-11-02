
@interface DMFReportingRequirements : NSObject <NSCopying, NSSecureCoding> {
    NSString * _reachableHostName;
    bool  _requireActiveConnection;
    double  _updateCoalescenceInterval;
}

@property (nonatomic, copy) NSString *reachableHostName;
@property (nonatomic) bool requireActiveConnection;
@property (nonatomic) double updateCoalescenceInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reachableHostName;
- (bool)requireActiveConnection;
- (void)setReachableHostName:(id)arg1;
- (void)setRequireActiveConnection:(bool)arg1;
- (void)setUpdateCoalescenceInterval:(double)arg1;
- (double)updateCoalescenceInterval;

@end
