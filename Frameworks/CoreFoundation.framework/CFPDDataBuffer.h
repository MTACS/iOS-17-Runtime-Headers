
@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromCFData:(struct __CFData { }*)arg1;
+ (id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(bool)arg2;
+ (id)newBufferFromPropertyList:(void*)arg1;

- (bool)beginAccessing;
- (void*)bytes;
- (struct __CFData { }*)copyCFData;
- (void*)copyPropertyListWithMutability:(unsigned long long)arg1 error:(struct __CFError {}**)arg2;
- (id)copyXPCData;
- (void)endAccessing;
- (unsigned long long)length;
- (bool)purgable;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)arg1;
- (bool)validatePlist;

@end
