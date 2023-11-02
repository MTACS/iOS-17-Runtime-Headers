
@interface CNChangeHistoryLabeledValueChange : NSObject <NSSecureCoding> {
    long long  _changeType;
    NSString * _contactIdentifier;
    NSString * _labeledValueIdentifier;
    NSString * _propertyKey;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *labeledValueIdentifier;
@property (nonatomic, readonly, copy) NSString *propertyKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)changeType;
- (id)contactIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 changeType:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)labeledValueIdentifier;
- (id)propertyKey;

@end
