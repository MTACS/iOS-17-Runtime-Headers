
@interface VCFileUtil : NSObject

+ (double)audioContentLengthOfFile:(id)arg1;
+ (double)contentLengthOfFile:(id)arg1;
+ (unsigned long long)sizeOfFile:(id)arg1;
+ (struct tagVCFileStats { unsigned long long x1; double x2; double x3; })statsOfFile:(id)arg1;

@end
