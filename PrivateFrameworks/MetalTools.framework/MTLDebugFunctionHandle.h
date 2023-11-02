
@interface MTLDebugFunctionHandle : MTLToolsFunctionHandle <MTLFunctionHandle> {
    unsigned long long  _stage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) unsigned long long stage;
@property (readonly) Class superclass;

- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 function:(id)arg3 stage:(unsigned long long)arg4;
- (unsigned long long)stage;

@end
