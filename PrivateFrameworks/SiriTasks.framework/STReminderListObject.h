
@interface STReminderListObject : STSiriModelObject {
    NSString * _name;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (id)_aceValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end