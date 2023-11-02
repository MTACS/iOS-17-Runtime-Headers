
@interface TPSContextualClientContextEvent : TPSContextualEvent {
    NSArray * _conditions;
}

@property (nonatomic, copy) NSArray *conditions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientContextKeys;
- (id)conditions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setConditions:(id)arg1;

@end
