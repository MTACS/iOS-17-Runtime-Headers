
@interface CNLabelValuePair : NSObject <NSCopying> {
    NSString * _label;
    id  _value;
}

@property (readonly) NSString *label;
@property (readonly) id value;

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)value;

@end
