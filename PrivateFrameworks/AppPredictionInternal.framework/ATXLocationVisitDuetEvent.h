
@interface ATXLocationVisitDuetEvent : ATXDuetEvent <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithCurrentContextStoreValues:(id)arg1;
- (id)initWithLocationOfInterestIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end
