
@interface VUIMediaEntityFetchResponseChanges : NSObject {
    VUICollectionChangeSet * _groupingChangeSet;
    VUICollectionChangeSet * _mediaEntitiesChangeSet;
}

@property (nonatomic, retain) VUICollectionChangeSet *groupingChangeSet;
@property (nonatomic, retain) VUICollectionChangeSet *mediaEntitiesChangeSet;

- (void).cxx_destruct;
- (id)description;
- (id)groupingChangeSet;
- (id)init;
- (id)initWithMediaEntitiesChangeSet:(id)arg1;
- (id)mediaEntitiesChangeSet;
- (void)setGroupingChangeSet:(id)arg1;
- (void)setMediaEntitiesChangeSet:(id)arg1;

@end
