
@interface PGGraphContactNode : PGGraphOptimizedNode {
    NSDate * _birthdayDate;
    NSString * _contactIdentifier;
    NSString * _name;
    NSDate * _potentialBirthdayDate;
}

@property (readonly) NSDate *birthdayDate;
@property (readonly) NSString *contactIdentifier;
@property (readonly) NSString *name;
@property (readonly) NSDate *potentialBirthdayDate;

+ (id)filter;
+ (id)filterWithContactIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)birthdayDate;
- (id)contactIdentifier;
- (id)description;
- (unsigned short)domain;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithName:(id)arg1 contactIdentifier:(id)arg2 birthdayDate:(id)arg3 potentialBirthdayDate:(id)arg4;
- (id)label;
- (id)name;
- (id)potentialBirthdayDate;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)arg1;
- (unsigned long long)sexHintForGivenName;

@end
