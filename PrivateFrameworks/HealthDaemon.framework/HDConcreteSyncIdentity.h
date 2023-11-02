
@interface HDConcreteSyncIdentity : NSObject <NSCopying> {
    HDSyncIdentityEntity * _entity;
    HDSyncIdentity * _identity;
    bool  _isChild;
}

@property (nonatomic, readonly, copy) HDSyncIdentityEntity *entity;
@property (nonatomic, readonly, copy) HDSyncIdentity *identity;
@property (nonatomic, readonly) bool isChild;

+ (id)new;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)entity;
- (unsigned long long)hash;
- (id)identity;
- (id)init;
- (bool)isChild;
- (bool)isEqual:(id)arg1;

@end
