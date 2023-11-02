
@interface PFUbiquityGlobalObjectID : NSObject <NSCopying> {
    NSString * _entityName;
    unsigned long long  _hash;
    NSManagedObjectID * _managedObjectID;
    NSString * _owningPeerID;
    NSString * _primaryKey;
    unsigned long long  _primaryKeyInteger;
    NSString * _storeName;
}

@property (nonatomic, readonly) unsigned long long hash;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCompressedString:(id)arg1 forStoreWithName:(id)arg2 andEntityNames:(id)arg3 primaryKeys:(id)arg4 peerIDs:(id)arg5;
- (id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 andPeerID:(id)arg4;
- (id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKeyInteger:(unsigned long long)arg3 andPeerID:(id)arg4;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)updateHash;

@end
