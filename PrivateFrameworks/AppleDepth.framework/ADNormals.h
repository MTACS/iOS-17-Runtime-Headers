
@interface ADNormals : NSObject

+ (long long)normalsFromDepth:(struct __CVBuffer { }*)arg1 focalLength:(float)arg2 principalPoint:(struct CGPoint { double x1; double x2; })arg3 normalsOutput:(struct __CVBuffer { }*)arg4;
+ (long long)normalsFromDepth:(struct __CVBuffer { }*)arg1 focalLength:(float)arg2 principalPoint:(struct CGPoint { double x1; double x2; })arg3 normalsOutput:(struct __CVBuffer { }*)arg4 withHelperBuffer:(id)arg5;

@end
