
@interface ATInternalError : NSObject

+ (id)errorWithCode:(unsigned long long)arg1 format:(id)arg2;
+ (id)errorWithCode:(unsigned long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithPosixError:(int)arg1 format:(id)arg2;

@end
