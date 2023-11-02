
@interface NSPersistentCacheRow : NSObject {
    double  _birth;
    int  _cd_rc;
    struct _externalRefFlags_st { 
        unsigned int _invalidToOnes : 1; 
        unsigned int _hasTemporaryID : 1; 
        unsigned int _backgroundDealloc : 1; 
        unsigned int _reservedFlags : 1; 
        unsigned int _virtualfk_count : 14; 
        unsigned int _ordkey_count : 14; 
    }  _externalRefFlags;
    int  _externalReferenceCount;
    id * _toManyMap;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)dealloc;
- (id)initWithOptions:(unsigned int)arg1 andTimestamp:(double)arg2;
- (const id*)knownKeyValuesPointer;
- (id)objectID;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)version;

@end
