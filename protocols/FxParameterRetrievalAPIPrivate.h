
@protocol FxParameterRetrievalAPIPrivate

@required

- (bool)getLevelsBlack:(double*)arg1 White:(double*)arg2 Gamma:(double*)arg3 fromParm:(unsigned int)arg4 atTime:(union { double x1; struct { /* ? */ } *x2; })arg5;

@end
