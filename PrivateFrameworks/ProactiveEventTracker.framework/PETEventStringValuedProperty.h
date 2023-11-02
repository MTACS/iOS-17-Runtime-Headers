
@interface PETEventStringValuedProperty : PETEventProperty {
    bool  _autoSanitizeValues;
    NSSet * _possibleValues;
}

- (void).cxx_destruct;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (unsigned long long)cardinality;
- (id)description;
- (id)initWithName:(id)arg1 possibleValues:(id)arg2 autoSanitizeValues:(bool)arg3;
- (bool)isValidValue:(id)arg1;
- (id)longestValueString;
- (id)possibleValues;

@end