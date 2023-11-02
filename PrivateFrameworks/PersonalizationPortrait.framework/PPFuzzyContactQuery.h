
@interface PPFuzzyContactQuery : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    bool  _onlyAddressBook;
    NSSet * _sourceBundleIds;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) bool onlyAddressBook;
@property (nonatomic, retain) NSSet *sourceBundleIds;
@property (nonatomic, retain) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFuzzyContactQuery:(id)arg1;
- (bool)onlyAddressBook;
- (void)setEndDate:(id)arg1;
- (void)setOnlyAddressBook:(bool)arg1;
- (void)setSourceBundleIds:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)sourceBundleIds;
- (id)startDate;

@end
