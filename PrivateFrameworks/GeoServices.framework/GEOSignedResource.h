
@interface GEOSignedResource : NSObject

+ (bool)_validateResource:(unsigned long long)arg1 atPath:(id)arg2 data:(id*)arg3 error:(id*)arg4;
+ (bool)_validateResource:(unsigned long long)arg1 withData:(id)arg2 data:(id*)arg3 error:(id*)arg4;
+ (id)loadResource:(unsigned long long)arg1 atPath:(id)arg2 error:(id*)arg3;
+ (id)loadResourceAtPath:(id)arg1 error:(id*)arg2;
+ (unsigned long long)typeForResourceByFileName:(id)arg1;
+ (id)validateResource:(unsigned long long)arg1 atPath:(id)arg2;
+ (id)validateResource:(unsigned long long)arg1 withData:(id)arg2;
+ (id)validateResourceAtPath:(id)arg1;

@end
