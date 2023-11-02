
@interface _GCDevicePhysicalInputStateTable : NSObject <NSCopying> {
    unsigned short  _magic;
    unsigned int  _objectSlotCount;
    struct ObjectStateEntry { unsigned long long x1; id x2; } * _objectState;
    unsigned long long  _objectStateGeneration;
    unsigned int  _primitiveSlotCount;
    struct PrimitiveStateEntry { unsigned long long x1; } * _primitiveState;
    unsigned long long  _primitiveStateGeneration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
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
