
@protocol MTLLibrary <NSObject>

@required

- (<MTLDevice> *)device;
- (NSArray *)functionNames;
- (NSString *)installName;
- (NSString *)label;
- (void)newFunctionWithDescriptor:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: MTLFunctionDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLFunction> *, NSError *, void*
- (<MTLFunction> *)newFunctionWithDescriptor:(MTLFunctionDescriptor *)arg1 error:(id*)arg2;
- (<MTLFunction> *)newFunctionWithName:(NSString *)arg1;
- (void)newFunctionWithName:(void *)arg1 constantValues:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, MTLFunctionConstantValues *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLFunction> *, NSError *, void*
- (<MTLFunction> *)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 error:(id*)arg3;
- (void)newIntersectionFunctionWithDescriptor:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: MTLIntersectionFunctionDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLFunction> *, NSError *, void*
- (<MTLFunction> *)newIntersectionFunctionWithDescriptor:(MTLIntersectionFunctionDescriptor *)arg1 error:(id*)arg2;
- (void)setLabel:(NSString *)arg1;
- (long long)type;

@end
