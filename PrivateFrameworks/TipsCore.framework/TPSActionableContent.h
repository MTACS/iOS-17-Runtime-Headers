
@interface TPSActionableContent : TPSContent {
    NSArray * _actions;
}

@property (nonatomic, copy) NSArray *actions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;
- (void)setActions:(id)arg1;

@end
