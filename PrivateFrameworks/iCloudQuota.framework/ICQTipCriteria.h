
@interface ICQTipCriteria : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _criteriaURL;
    NSArray * _excludeApps;
    NSNumber * _maximumRange;
    NSNumber * _minimumRange;
}

@property (nonatomic, retain) NSURL *criteriaURL;
@property (nonatomic, retain) NSArray *excludeApps;
@property (nonatomic, retain) NSNumber *maximumRange;
@property (nonatomic, retain) NSNumber *minimumRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criteriaURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)excludeApps;
- (id)initWithCoder:(id)arg1;
- (id)maximumRange;
- (id)minimumRange;
- (void)setCriteriaURL:(id)arg1;
- (void)setExcludeApps:(id)arg1;
- (void)setMaximumRange:(id)arg1;
- (void)setMinimumRange:(id)arg1;

@end
