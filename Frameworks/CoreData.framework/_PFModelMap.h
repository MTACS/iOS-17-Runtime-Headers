
@interface _PFModelMap : NSObject {
    NSArray * _allEntities;
    unsigned long long  _clientEntityCount;
    NSManagedObjectModel * _clientModel;
    NSDictionary * _entitiesByPath;
    unsigned long long  _entityCount;
    id * _indexedEntities;
    unsigned long long * _modelEntityCounts;
    NSArray * _models;
}

@property (nonatomic, readonly) NSArray *allEntities;
@property (nonatomic, readonly) unsigned long long clientEntityCount;
@property (nonatomic, readonly) NSManagedObjectModel *clientModel;
@property (nonatomic, readonly) NSDictionary *entitiesByPath;

+ (id)ancillaryModelFactoryClasses;

- (id)allEntities;
- (unsigned long long)clientEntityCount;
- (id)clientModel;
- (void)dealloc;
- (id)entitiesByPath;

@end
