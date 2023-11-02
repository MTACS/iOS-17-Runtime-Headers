
@interface PTSliderRow : PTSRow {
    double  _maxValue;
    double  _minValue;
    id /* block */  _valueStringFormatter;
}

@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic, copy) id /* block */ valueStringFormatter;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)maxValue;
- (double)minValue;
- (id)minValue:(double)arg1 maxValue:(double)arg2;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setValueStringFormatter:(id /* block */)arg1;
- (id /* block */)valueStringFormatter;
- (id)valueStringFormatter:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI

- (Class)tableViewCellClass;

@end
