
@interface MTLibraryChanges : NSObject <NSCopying> {
    NSMutableDictionary * _changesByEntityName;
    NSString * _contextName;
}

@property (nonatomic, retain) NSMutableDictionary *changesByEntityName;
@property (nonatomic, readonly) NSString *contextName;

- (void).cxx_destruct;
- (void)addChangeWith:(id)arg1 entityName:(id)arg2 changeType:(int)arg3;
- (id)changesByEntityName;
- (id)changesForEntityName:(id)arg1;
- (void)combineChanges:(id)arg1;
- (id)contextName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)entityNames;
- (bool)hasChanges;
- (bool)hasChangesForEntityNames:(id)arg1;
- (bool)hasDeletes;
- (bool)hasDeletesForEntityNames:(id)arg1;
- (bool)hasInserts;
- (bool)hasInsertsForEntityNames:(id)arg1;
- (bool)hasUpdates;
- (bool)hasUpdatesForEntityNames:(id)arg1;
- (id)init;
- (id)initWithContextName:(id)arg1;
- (void)removeAllChanges;
- (void)setChangesByEntityName:(id)arg1;

@end
