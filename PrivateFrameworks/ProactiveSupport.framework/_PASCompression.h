
@interface _PASCompression : NSObject

+ (id)_compress:(id)arg1 fast:(bool)arg2 lowMemory:(bool)arg3;
+ (id)compress:(id)arg1 fast:(bool)arg2;
+ (id)compress:(id)arg1 lowMemory:(bool)arg2;
+ (id)decompress:(id)arg1;
+ (id)decompress:(id)arg1 maxLength:(long long)arg2;
+ (id)fastCompress:(id)arg1;

@end
