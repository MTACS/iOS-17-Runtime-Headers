
@interface STSetting : STSiriModelObject {
    long long  _type;
    id  _value;
}

@property (nonatomic) long long type;
@property (nonatomic, retain) id value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (long long)type;
- (id)value;

@end
