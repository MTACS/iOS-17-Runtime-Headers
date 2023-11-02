
@interface MTLObjectPayloadBindingInternal : MTLBindingInternal <MTLObjectPayloadBinding> {
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
@property (readonly) unsigned long long objectPayloadAlignment;
@property (readonly) unsigned long long objectPayloadDataSize;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (getter=isUsed, readonly) bool used;

- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(bool)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 dataSize:(unsigned long long)arg7 alignment:(unsigned long long)arg8;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(bool)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9;
- (bool)isEqual:(id)arg1;
- (unsigned long long)objectPayloadAlignment;
- (unsigned long long)objectPayloadDataSize;
- (unsigned long long)objectPayloadDataType;
- (id)objectPayloadStructType;
- (void)setStructType:(id)arg1;
- (void)setStructType:(id)arg1 doRetain:(bool)arg2;
- (id)structType;

@end
