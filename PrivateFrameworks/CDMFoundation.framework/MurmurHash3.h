
@interface MurmurHash3 : NSObject

+ (struct { unsigned long long x1; unsigned long long x2; })hash128WithKey:(const void*)arg1 length:(unsigned long long)arg2 seed:(unsigned int)arg3;

@end
