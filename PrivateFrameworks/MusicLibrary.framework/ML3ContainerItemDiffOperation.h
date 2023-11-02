
@interface ML3ContainerItemDiffOperation : NSOperation {
    ML3DatabaseConnection * _connection;
    NSArray * _containerItemsToDelete;
    NSArray * _containerItemsToUpdate;
    long long  _containerPersistentID;
    NSArray * _updatedItemsPersistentIDs;
}

@property (nonatomic, retain) NSArray *containerItemsToDelete;
@property (nonatomic, retain) NSArray *containerItemsToUpdate;

- (void).cxx_destruct;
- (id)containerItemsToDelete;
- (id)containerItemsToUpdate;
- (id)initWithContainerPersistentID:(long long)arg1 updatedItemsPersistentIDs:(id)arg2 connection:(id)arg3;
- (void)main;
- (void)setContainerItemsToDelete:(id)arg1;
- (void)setContainerItemsToUpdate:(id)arg1;

@end
