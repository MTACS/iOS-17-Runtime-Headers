
@interface HKAccessibilityValue : NSObject {
    NSNumber * _valueAsNumber;
    NSString * _valueDescription;
    NSString * _valueTitle;
    NSString * _valueType;
}

@property (nonatomic, readonly) NSNumber *valueAsNumber;
@property (nonatomic, readonly) NSString *valueDescription;
@property (nonatomic, readonly) NSString *valueTitle;
@property (nonatomic, readonly) NSString *valueType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithValueTitle:(id)arg1 valueType:(id)arg2 valueDescription:(id)arg3 valueAsNumber:(id)arg4;
- (id)valueAsNumber;
- (id)valueDescription;
- (id)valueTitle;
- (id)valueType;

@end
