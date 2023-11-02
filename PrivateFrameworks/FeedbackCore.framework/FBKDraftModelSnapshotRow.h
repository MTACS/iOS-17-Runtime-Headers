
@interface FBKDraftModelSnapshotRow : NSObject {
    NSObject * _object;
    FBKDraftModelSnapshotSection * _section;
}

@property (nonatomic, retain) NSObject *object;
@property (nonatomic, retain) FBKDraftModelSnapshotSection *section;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSection:(id)arg1 object:(id)arg2;
- (id)object;
- (id)section;
- (void)setObject:(id)arg1;
- (void)setSection:(id)arg1;

@end
