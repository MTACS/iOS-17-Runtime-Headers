
@interface EMAxisMapper : CMMapper

- (bool)centerLabels;
- (bool)isLogarithmic;
- (id)label;
- (id)labels;
- (float)maxValue;
- (float)minValue;
- (id)position;
- (struct CGColor { }*)strokeColor;
- (float)strokeWidth;
- (struct CGColor { }*)textColor;
- (unsigned int)type;
- (float)unit;
- (id)values;

@end
