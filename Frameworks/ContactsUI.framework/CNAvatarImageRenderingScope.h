
@interface CNAvatarImageRenderingScope : NSObject

+ (id)scopeWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 rightToLeft:(bool)arg3 style:(unsigned long long)arg4;
+ (id)scopeWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 rightToLeft:(bool)arg3 style:(unsigned long long)arg4 backgroundStyle:(unsigned long long)arg5;
+ (id)scopeWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 rightToLeft:(bool)arg3 style:(unsigned long long)arg4 color:(id)arg5;
+ (id)scopeWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(id)arg4 rightToLeft:(bool)arg5 style:(unsigned long long)arg6;
+ (id)scopeWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(id)arg4 rightToLeft:(bool)arg5 style:(unsigned long long)arg6 backgroundStyle:(unsigned long long)arg7 color:(id)arg8 maskedAvatarIndices:(id)arg9;
+ (id)scopeWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(id)arg4 rightToLeft:(bool)arg5 style:(unsigned long long)arg6 color:(id)arg7;

@end
