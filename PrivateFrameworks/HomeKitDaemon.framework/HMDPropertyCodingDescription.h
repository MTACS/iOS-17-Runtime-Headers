
@interface HMDPropertyCodingDescription : NSObject {
    NSString * _codingKey;
    unsigned long long  _conditions;
    NSPropertyDescription * _property;
}

@property (readonly) NSString *codingKey;
@property (getter=isConditional, readonly) bool conditional;
@property (readonly) NSString *name;
@property (readonly) NSPropertyDescription *property;
@property (readonly) NSString *shortDescription;

- (void).cxx_destruct;
- (id)codingKey;
- (bool)isConditional;
- (id)name;
- (id)property;
- (id)shortDescription;
- (bool)shouldIncludeWithConditions:(id)arg1;

@end
