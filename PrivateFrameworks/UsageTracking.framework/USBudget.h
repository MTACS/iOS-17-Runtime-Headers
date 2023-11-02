
@interface USBudget : NSObject <NSSecureCoding> {
    NSSet * _bundleIdentifiers;
    NSString * _calendarIdentifier;
    NSSet * _categoryIdentifiers;
    NSString * _identifier;
    NSDictionary * _schedule;
    long long  _type;
    NSSet * _webDomains;
}

@property (readonly, copy) NSSet *bundleIdentifiers;
@property (readonly, copy) NSString *calendarIdentifier;
@property (readonly, copy) NSSet *categoryIdentifiers;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSSet *items;
@property (readonly, copy) NSDictionary *schedule;
@property (readonly) long long type;
@property (readonly, copy) NSSet *webDomains;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (id)calendarIdentifier;
- (id)categoryIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCategories:(id)arg1 applications:(id)arg2 webDomains:(id)arg3 schedule:(id)arg4 calendarIdentifier:(id)arg5 identifier:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 items:(id)arg2 schedule:(id)arg3 calendarIdentifier:(id)arg4 identifier:(id)arg5;
- (id)items;
- (id)schedule;
- (long long)type;
- (id)webDomains;

@end
