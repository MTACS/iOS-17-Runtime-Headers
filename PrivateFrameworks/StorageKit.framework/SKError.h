
@interface SKError : NSObject

+ (id)errorWithCode:(long long)arg1 disks:(id)arg2 userInfo:(id)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithOSStatus:(int)arg1 error:(id*)arg2;
+ (id)errorWithPOSIXCode:(int)arg1 error:(id*)arg2;
+ (bool)failWithError:(id)arg1 error:(id*)arg2;
+ (bool)failWithPOSIXCode:(int)arg1 error:(id*)arg2;
+ (id)frameworkBundle;
+ (id)localizedDescriptionForCode:(long long)arg1;
+ (id)nilWithError:(id)arg1 error:(id*)arg2;
+ (id)nilWithOSStatus:(int)arg1 error:(id*)arg2;
+ (id)nilWithPOSIXCode:(int)arg1 error:(id*)arg2;

@end
