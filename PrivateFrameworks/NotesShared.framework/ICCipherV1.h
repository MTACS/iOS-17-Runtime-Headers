
@interface ICCipherV1 : NSObject

+ (id)ic_decrypt:(id)arg1 withKey:(id)arg2 tag:(id)arg3 initialVector:(id)arg4 error:(id*)arg5;
+ (id)ic_encrypt:(id)arg1 withKey:(id)arg2 tag:(id*)arg3 initialVector:(id*)arg4 error:(id*)arg5;
+ (id)ic_keyWithUserPassphrase:(id)arg1 salt:(id)arg2 iterationCount:(unsigned long long)arg3 error:(id*)arg4;
+ (id)ic_unwrap:(id)arg1 withWrapper:(id)arg2 error:(id*)arg3;
+ (id)ic_wrap:(id)arg1 withWrapper:(id)arg2 error:(id*)arg3;

@end
