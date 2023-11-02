
@interface NSErrorVariableConstraint : NSLayoutConstraint {
    double  _errorValue;
    NSISVariable * _errorVariable;
}

- (bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(bool*)arg2;
- (id)constrainedConstraint;
- (void)dealloc;
- (id)initWithVariable:(id)arg1 value:(double)arg2;
- (int)nsis_orientationHintForVariable:(id)arg1;

@end
