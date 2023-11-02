
@interface PSGProactiveTrigger : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _triggerAttributes;
    NSString * _triggerCategory;
    unsigned long long  _triggerSourceType;
}

@property (nonatomic, readonly) NSDictionary *triggerAttributes;
@property (nonatomic, readonly) NSString *triggerCategory;
@property (nonatomic, readonly) unsigned long long triggerSourceType;

+ (id)getGivenNameQualifier:(id)arg1;
+ (id)getSearchTerm:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceType:(unsigned long long)arg1 category:(id)arg2 attributes:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTrigger:(id)arg1;
- (id)triggerAttributes;
- (id)triggerCategory;
- (unsigned long long)triggerSourceType;

@end
