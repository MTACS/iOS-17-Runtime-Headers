
@protocol FxParameterAPIPrivate

@required

- (bool)add2DScaleWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned int)arg5;
- (bool)add2DVectorWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned int)arg5;
- (bool)addLevelsWithName:(NSString *)arg1 parmId:(unsigned int)arg2 hideGamma:(bool)arg3 parmFlags:(unsigned int)arg4;
- (bool)addPopupMenuWithNameAndTags:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(unsigned int)arg3 menuEntries:(NSArray *)arg4 tags:(const int*)arg5 tagCount:(int)arg6 parmFlags:(unsigned int)arg7;
- (NSArray *)getAllParameterValuesAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 transactionID:(unsigned long long)arg2 pluginSessionID:(unsigned long long)arg3;
- (bool)hasPathParameters;
- (bool)imageSize:(struct CGSize { double x1; double x2; }*)arg1 fromParameter:(unsigned int)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (bool)setCustomParameterDefaultValue:(id <NSCoding>)arg1 parmId:(unsigned int)arg2;
- (void)setHandlingOSCEvents:(bool)arg1;
- (void)setupImageParamIDs:(void*)arg1;
- (FxParameterTransaction *)transactionForParameterID:(unsigned int)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 transactionID:(unsigned long long)arg3 pluginSessionID:(unsigned long long)arg4;

@end
