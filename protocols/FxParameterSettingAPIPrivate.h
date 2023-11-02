
@protocol FxParameterSettingAPIPrivate

@required

- (bool)addFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (bool)removeFlags:(unsigned int)arg1 fromParm:(unsigned int)arg2;
- (bool)setLevelsBlack:(double)arg1 White:(double)arg2 Gamma:(double)arg3 forParm:(unsigned int)arg4 atTime:(union { double x1; struct { /* ? */ } *x2; })arg5;

@end
