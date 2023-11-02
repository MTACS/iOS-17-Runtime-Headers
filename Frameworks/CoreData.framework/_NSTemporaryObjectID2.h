
@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {
    id  _store;
    _NS128bitWrapper * _uuid128;
}

+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;

- (bool)_isPersistentStoreAlive;
- (id)_referenceData;
- (void)_setPersistentStore:(id)arg1;
- (id)_storeIdentifier;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)persistentStore;

@end
