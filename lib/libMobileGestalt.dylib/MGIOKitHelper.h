
@interface MGIOKitHelper : NSObject {
    unsigned int  devIterator;
}

- (struct __CFBoolean { }*)copyBooleanFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFData { }*)copyDataFromDeviceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFData { }*)copyDataFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (void*)copyDeviceTreeProperty:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (unsigned int)copyDeviceTreeStructureNext:(id)arg1 withFirstChar:(BOOL)arg2;
- (struct __CFNumber { }*)copyNumberFromData:(struct __CFData { }*)arg1;
- (struct __CFNumber { }*)copyNumberFromDeviceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (void*)copyPropertyFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (void*)copyServiceTreeProperty:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFString { }*)copyStringFromDeviceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFString { }*)copyStringFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (bool)createServicesIteratorByNameMatch:(const char *)arg1;
- (bool)createTreeIterator:(const char *)arg1;
- (void)dealloc;
- (void)deleteIterator;
- (struct __CFDictionary { }*)deviceTreeNodeIsPresent:(struct __CFString { }*)arg1 withExactName:(bool)arg2 withNodeClass:(struct __CFString { }*)arg3;
- (id)init;
- (struct __CFArray { }*)iteratorCopyBusyServiceNames;

@end
