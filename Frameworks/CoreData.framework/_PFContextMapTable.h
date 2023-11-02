
@interface _PFContextMapTable : NSObject {
    unsigned long long * _capacitiesFor64bitPKMappings;
    struct _contextMapTableFlags { 
        unsigned int _usesWeakReferences : 1; 
        unsigned int _garbageCollectionEnabled : 1; 
        unsigned int _reservedFlags : 30; 
    }  _flags;
    _PFModelMap * _modelMap;
    struct __CFDictionary {} ** _objectsBy64bitPKID;
    struct __CFDictionary {} ** _objectsByPermanentObjectID;
    struct __CFDictionary { } * _objectsByTemporaryID;
    unsigned long long  _slotLimit;
}

- (void)dealloc;

@end
