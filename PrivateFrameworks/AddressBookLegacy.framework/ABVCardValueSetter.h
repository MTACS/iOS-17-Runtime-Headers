
@interface ABVCardValueSetter : NSObject

- (id)fullName;
- (id)imageData;
- (bool)propertyIsValidForPerson:(unsigned int)arg1;
- (bool)setImageData:(id)arg1;
- (bool)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (bool)setValue:(void*)arg1 forProperty:(unsigned int)arg2;
- (void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned int)arg2;
- (void*)valueForProperty:(unsigned int)arg1;

@end
