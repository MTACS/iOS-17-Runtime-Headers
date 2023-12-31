
@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor {
    struct MTLArgumentDescriptorPrivate { 
        unsigned long long dataType; 
        unsigned long long index; 
        unsigned long long arrayLength; 
        unsigned long long access; 
        unsigned long long textureType; 
        unsigned long long constantBlockAlignment; 
    }  _private;
}

+ (id)indirectArgumentDescriptor;

- (unsigned long long)access;
- (unsigned long long)arrayLength;
- (unsigned long long)constantBlockAlignment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataType;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setAccess:(unsigned long long)arg1;
- (void)setArrayLength:(unsigned long long)arg1;
- (void)setConstantBlockAlignment:(unsigned long long)arg1;
- (void)setDataType:(unsigned long long)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setTextureType:(unsigned long long)arg1;
- (unsigned long long)textureType;

@end
