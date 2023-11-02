
@interface _GCDevicePhysicalInputView : NSObject <_GCDevicePhysicalInputViewDataSource, _GCDevicePhysicalInputViewInitializationContext> {
    <_GCDevicePhysicalInputViewDataSource> * _dataSource;
    _Atomic bool  _isObserved;
    bool  _isPartOfPhysicalInput;
    bool  _isSnapshot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) _GCDevicePhysicalInputBase *implementation;
@property (readonly) Class superclass;

+ (unsigned short)updateContextSize;
+ (id)withParameters:(id)arg1;
+ (id)withTemplate:(id)arg1 context:(id)arg2;

- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (bool)allowsWeakReference;
- (void)dealloc;
- (id)implementation;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;
- (unsigned long long)view:(id)arg1 allocateObjectSlot:(unsigned char)arg2 withCopyOfValueFromView:(id)arg3 slot:(unsigned long long)arg4;
- (unsigned long long)view:(id)arg1 allocatePrimitiveSlot:(unsigned char)arg2 withCopyOfValueFromView:(id)arg3 slot:(unsigned long long)arg4;
- (unsigned long long)view:(id)arg1 makeReferenceToView:(id)arg2;
- (id)view:(id)arg1 objectValueForSlot:(unsigned long long*)arg2;
- (unsigned long long)view:(id)arg1 primitiveValueForSlot:(unsigned long long*)arg2;
- (void)view:(id)arg1 setObjectValue:(id)arg2 forSlot:(unsigned long long*)arg3 policy:(unsigned long long)arg4;
- (void)view:(id)arg1 setPrimitiveValue:(unsigned long long)arg2 forSlot:(unsigned long long*)arg3;
- (bool)view:(id)arg1 testAndSetObjectValue:(id)arg2 forSlot:(unsigned long long*)arg3 policy:(unsigned long long)arg4;
- (bool)view:(id)arg1 testAndSetPrimitiveValue:(unsigned long long)arg2 forSlot:(unsigned long long*)arg3;
- (id)view:(id)arg1 viewForSlot:(unsigned long long*)arg2;
- (id)viewDataSource:(id)arg1;

@end
