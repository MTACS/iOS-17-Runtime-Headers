
@interface PGTitleSpecTimeArgument : PGTitleSpecArgument {
    unsigned long long  _type;
}

@property (readonly) unsigned long long type;

+ (id)argumentWithTimeType:(unsigned long long)arg1;

- (id)_anniversaryTitleWithMomentNodes:(id)arg1;
- (id)_birthdayTitleWithMomentNodes:(id)arg1;
- (id)_holidayTitleWithMomentNodes:(id)arg1;
- (id)_resolvedStringWithMomentNodes:(id)arg1 argumentEvaluationContext:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 argumentEvaluationContext:(id)arg3;
- (id)_yearsAgoStringWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2;
- (id)_yearsAgoTitle;
- (id)initWithTimeType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
