
@interface VUICollisionSafeIdentifier : NSObject <NSCopying> {
    unsigned long long  _collisionCount;
    NSObject<NSCopying> * _rootIdentifier;
}

@property (nonatomic) unsigned long long collisionCount;
@property (nonatomic, copy) NSObject<NSCopying> *rootIdentifier;

- (void).cxx_destruct;
- (unsigned long long)collisionCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRootIdentifier:(id)arg1 collisionCount:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)rootIdentifier;
- (void)setCollisionCount:(unsigned long long)arg1;
- (void)setRootIdentifier:(id)arg1;

@end
