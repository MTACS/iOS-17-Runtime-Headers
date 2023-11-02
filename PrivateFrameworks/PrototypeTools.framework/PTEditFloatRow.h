
@interface PTEditFloatRow : PTSRow {
    double  _maxValue;
    double  _minValue;
    unsigned long long  _precision;
}

@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic) unsigned long long precision;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (bool)supportsSecureCoding;

- (id)_validatedValue:(id)arg1;
- (id)between:(double)arg1 and:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)maxValue;
- (double)minValue;
- (unsigned long long)precision;
- (id)precision:(unsigned long long)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setPrecision:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI

- (Class)tableViewCellClass;

@end
