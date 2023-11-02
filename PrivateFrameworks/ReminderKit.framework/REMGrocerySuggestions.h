
@interface REMGrocerySuggestions : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _suggestedSectionsByReminderTitle;
}

@property (nonatomic, readonly) NSDictionary *suggestedSectionsByReminderTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestedSectionsByReminderTitle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)suggestedSectionsByReminderTitle;

@end
