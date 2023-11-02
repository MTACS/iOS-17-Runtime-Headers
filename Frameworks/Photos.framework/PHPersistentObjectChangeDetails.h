
@interface PHPersistentObjectChangeDetails : NSObject {
    NSSet * _deletedLocalIdentifiers;
    NSSet * _insertedLocalIdentifiers;
    long long  _objectType;
    NSSet * _updatedLocalIdentifiers;
}

@property (nonatomic, readonly) NSSet *deletedLocalIdentifiers;
@property (nonatomic, readonly) NSSet *insertedLocalIdentifiers;
@property (nonatomic, readonly) long long objectType;
@property (nonatomic, readonly) NSSet *updatedLocalIdentifiers;

- (void).cxx_destruct;
- (id)deletedLocalIdentifiers;
- (id)initWithObjectType:(long long)arg1 insertedIdentifiers:(id)arg2 updatedIdentifiers:(id)arg3 deletedIdentifiers:(id)arg4;
- (id)insertedLocalIdentifiers;
- (long long)objectType;
- (id)updatedLocalIdentifiers;

@end
