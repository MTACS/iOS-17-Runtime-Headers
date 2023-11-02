
@interface WFContactLabeledValue : NSObject {
    NSString * _label;
    id  _value;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) id value;

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
+ (id)localizedStringForLabel:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (id)label;
- (id)value;

@end
