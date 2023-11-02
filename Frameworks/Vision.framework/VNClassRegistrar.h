
@interface VNClassRegistrar : NSObject

+ (Class)classForClassCode:(unsigned int)arg1 error:(id*)arg2;
+ (id)classNameForClassCode:(unsigned int)arg1 error:(id*)arg2;
+ (unsigned char)entryTypeForClassCode:(unsigned int)arg1;
+ (unsigned char)entryTypeForClassName:(id)arg1;
+ (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
+ (bool)getClassCode:(unsigned int*)arg1 forClass:(Class)arg2 error:(id*)arg3;
+ (bool)getClassCode:(unsigned int*)arg1 forClassName:(id)arg2 error:(id*)arg3;
+ (bool)observationBoundsAreNormalizedToROIForRequestClassCode:(unsigned int)arg1 revision:(unsigned long long)arg2;
+ (bool)validateRequestClassName:(id)arg1 error:(id*)arg2;

@end
