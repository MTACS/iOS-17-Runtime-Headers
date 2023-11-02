
@interface MTInMemorySyncChangeStore : NSObject <MTSyncChangeStore> {
    NSMutableArray * _changes;
}

@property (nonatomic, retain) NSMutableArray *changes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)changes;
- (id)init;
- (id)loadChanges;
- (void)persistChanges:(id)arg1;
- (void)setChanges:(id)arg1;

@end
