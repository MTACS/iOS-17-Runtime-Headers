
@protocol TSDPartitioner

@required

- (bool)didHint:(id <TSDHint>)arg1 syncWithNextHint:(id <TSDHint>)arg2 horizontally:(bool)arg3 delta:(int)arg4;
- (<TSDHint><NSSecureCoding> *)hintForLayout:(TSDLayout *)arg1;
- (TSDLayout *)layoutForHint:(id <TSDHint>)arg1 parentLayout:(TSDLayout *)arg2;
- (<TSDHint><NSSecureCoding> *)nextHintForSize:(struct CGSize { double x1; double x2; })arg1 parentLayout:(TSDLayout *)arg2 previousHint:(id <TSDHint>)arg3 horizontally:(bool)arg4 outFinished:(out bool*)arg5;
- (TSDLayout *)nextLayoutForSize:(struct CGSize { double x1; double x2; })arg1 parentLayout:(TSDLayout *)arg2 previousHint:(id <TSDHint>)arg3 horizontally:(bool)arg4 outFinished:(out bool*)arg5;

@end
