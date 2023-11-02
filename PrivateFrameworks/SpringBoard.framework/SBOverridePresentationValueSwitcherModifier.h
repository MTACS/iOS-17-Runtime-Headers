
@interface SBOverridePresentationValueSwitcherModifier : SBSwitcherModifier {
    NSSet * _keys;
    double  _presentationValue;
}

- (void).cxx_destruct;
- (id)initWithAnimatablePropertyKeys:(id)arg1 presentationValue:(double)arg2;
- (double)presentationValueForAnimatableProperty:(id)arg1;

@end
