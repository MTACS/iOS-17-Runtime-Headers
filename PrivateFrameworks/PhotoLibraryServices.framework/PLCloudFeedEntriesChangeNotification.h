
@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification {
    NSSet * _deletedEntries;
    NSSet * _insertedEntries;
    bool  _shouldReload;
    NSSet * _updatedEntries;
}

@property (nonatomic, copy) NSSet *deletedEntries;
@property (nonatomic, copy) NSSet *insertedEntries;
@property (nonatomic) bool shouldReload;
@property (nonatomic, copy) NSSet *updatedEntries;

+ (id)notificationWithFullReload;
+ (id)notificationWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithFullReload;
- (id)_initWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;
- (id)deletedEntries;
- (id)insertedEntries;
- (id)name;
- (id)object;
- (void)setDeletedEntries:(id)arg1;
- (void)setInsertedEntries:(id)arg1;
- (void)setShouldReload:(bool)arg1;
- (void)setUpdatedEntries:(id)arg1;
- (bool)shouldReload;
- (id)updatedEntries;
- (id)userInfo;

@end
