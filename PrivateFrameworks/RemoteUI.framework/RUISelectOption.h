
@interface RUISelectOption : NSObject {
    NSString * _label;
    NSString * _value;
}

@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
