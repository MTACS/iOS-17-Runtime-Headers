
@interface PETEventNumericalProperty : PETEventProperty {
    bool  _clampValues;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _validRange;
}

- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (unsigned long long)_unsignedIntegerValueForNumericValue:(id)arg1;
- (unsigned long long)cardinality;
- (id)description;
- (id)initWithName:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 clampValues:(bool)arg3;
- (bool)isValidValue:(id)arg1;
- (id)longestValueString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })validRange;

@end