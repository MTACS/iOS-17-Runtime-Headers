
@interface MTLThreadgroupMemoryBindingInternal : MTLBindingInternal <MTLThreadgroupBinding> {
    unsigned short  _alignment;
    unsigned int  _dataSize;
    unsigned long long  _dataType;
}

@property (readonly) unsigned long long access;
@property (getter=isArgument, readonly) bool argument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long index;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly) unsigned long long threadgroupMemoryAlignment;
@property (readonly) unsigned long long threadgroupMemoryDataSize;
@property (readonly) long long type;
@property (getter=isUsed, readonly) bool used;

- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(bool)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9;
- (bool)isEqual:(id)arg1;
- (void)setStructType:(id)arg1;
- (void)setStructType:(id)arg1 doRetain:(bool)arg2;
- (id)structType;
- (unsigned long long)threadgroupMemoryAlignment;
- (unsigned long long)threadgroupMemoryDataSize;
- (unsigned long long)threadgroupMemoryDataType;
- (id)threadgroupMemoryStructType;

@end
