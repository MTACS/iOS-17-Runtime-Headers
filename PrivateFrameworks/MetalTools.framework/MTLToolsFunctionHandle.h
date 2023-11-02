
@interface MTLToolsFunctionHandle : MTLToolsObject <MTLFunctionHandle> {
    MTLToolsFunction * _function;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) MTLToolsFunction *function;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)function;
- (unsigned long long)functionType;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 function:(id)arg3;
- (id)name;

@end
