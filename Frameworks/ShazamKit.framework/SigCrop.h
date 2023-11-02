
@interface SigCrop : NSObject

+ (bool)ConvertException:(const struct exception { int (**x1)(); }*)arg1 toError:(id*)arg2;
+ (bool)ConvertSystemError:(const struct system_error { int (**x1)(); struct __libcpp_refstring { char *x_2_1_1; } x2; struct error_code { int x_3_1_1; struct error_category {} *x_3_1_2; } x3; }*)arg1 toError:(id*)arg2;
+ (bool)FillUnknownError:(id*)arg1;
+ (id)cropSignature:(id)arg1 atPosition:(double)arg2 withLength:(double)arg3 error:(id*)arg4;
+ (double)getSampleLength:(id)arg1 error:(id*)arg2;

@end
