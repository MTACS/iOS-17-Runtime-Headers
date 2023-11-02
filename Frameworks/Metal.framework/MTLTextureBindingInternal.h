
@interface MTLTextureBindingInternal : MTLBindingInternal <MTLTextureBinding> {
    unsigned int  _isDepthTexture;
    unsigned short  _textureDataType;
    unsigned int  _textureType;
}

@property (readonly) unsigned long long access;
@property (getter=isArgument, readonly) bool argument;
@property (readonly) unsigned long long arrayLength;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDepthTexture, readonly) bool depthTexture;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long index;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly) unsigned long long textureDataType;
@property (readonly) unsigned long long textureType;
@property (readonly) long long type;
@property (getter=isUsed, readonly) bool used;

- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 access:(unsigned long long)arg2 isActive:(bool)arg3 locationIndex:(unsigned long long)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 textureType:(unsigned long long)arg7 isDepthTexture:(bool)arg8;
- (bool)isDepthTexture;
- (bool)isEqual:(id)arg1;
- (unsigned long long)textureDataType;
- (unsigned long long)textureType;

@end
