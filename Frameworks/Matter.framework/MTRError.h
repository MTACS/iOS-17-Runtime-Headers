
@interface MTRError : NSObject

+ (id)errorForCHIPErrorCode:(struct ChipError { unsigned int x1; char *x2; unsigned int x3; })arg1;
+ (id)errorForIMStatus:(const void*)arg1;
+ (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })errorToCHIPErrorCode:(id)arg1;

@end
