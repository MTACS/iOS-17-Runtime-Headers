
@interface TRIFileLock : NSObject

+ (int)_lockingFlagsFromFileLockMode:(struct { unsigned char x1; })arg1;
+ (struct { unsigned char x1; })acquireLockOnPath:(id)arg1 fileLockMode:(struct { unsigned char x1; })arg2 blocking:(bool)arg3 andRunBlock:(id /* block */)arg4;

@end
