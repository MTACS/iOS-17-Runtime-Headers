
@interface HACCStackView : UIStackView

+ (double)separatorHeight;

- (void)addArrangedSubview:(id)arg1 andSeparator:(bool)arg2 withIndent:(double)arg3 withDarkBackground:(bool)arg4;
- (void)addArrangedSubview:(id)arg1 withPartialSeparator:(bool)arg2;
- (void)addArrangedSubview:(id)arg1 withPartialSeparator:(bool)arg2 withDarkBackground:(bool)arg3;
- (void)addArrangedSubview:(id)arg1 withSeparator:(bool)arg2;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 andSeparator:(bool)arg3 withIndent:(double)arg4 withDarkBackground:(bool)arg5;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 withPartialSeparator:(bool)arg3;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 withPartialSeparator:(bool)arg3 withDarkBackground:(bool)arg4;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 withSeparator:(bool)arg3;
- (void)removeArrangedSubview:(id)arg1;

@end
