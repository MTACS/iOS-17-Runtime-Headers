
@interface _GCDevicePhysicalInputMutableStateTable : NSObject <NSCopying> {
    unsigned short  _magic;
    NSPointerArray * _objectPolicyState;
    NSPointerArray * _objectState;
    NSPointerArray * _primitiveState;
}

@property (readonly) unsigned short magic;
@property (readonly) unsigned int objectSlotCount;
@property (readonly) unsigned int primitiveSlotCount;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (unsigned short)magic;
- (unsigned int)objectSlotCount;
- (id)objectValueAtIndex:(unsigned int)arg1;
- (unsigned int)primitiveSlotCount;
- (unsigned long long)primitiveValueAtIndex:(unsigned int)arg1;
- (void)setObjectValue:(id)arg1 atIndex:(unsigned int)arg2 policy:(unsigned long long)arg3;
- (void)setPrimitiveValue:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (bool)testAndSetObjectValue:(id)arg1 atIndex:(unsigned int)arg2 policy:(unsigned long long)arg3 compareObjects:(bool)arg4 previous:(id*)arg5;
- (bool)testAndSetPrimitiveValue:(unsigned long long)arg1 atIndex:(unsigned int)arg2 previous:(unsigned long long*)arg3;

@end
