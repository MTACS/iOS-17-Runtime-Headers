
@interface SCWZone : NSObject {
    SCWZoneSchema * _schema;
    <SCWZoneStore> * _store;
}

@property (nonatomic, readonly, copy) SCWZoneDiff *clientDiff;
@property (nonatomic, readonly, copy) NSArray *clientRecords;
@property (getter=isDirty, nonatomic, readonly) bool dirty;
@property (nonatomic, readonly) bool needsFirstSync;
@property (nonatomic, readonly) SCWZoneSchema *schema;
@property (nonatomic, retain) <SCWZoneStore> *store;

- (void).cxx_destruct;
- (id)clientDiff;
- (id)clientRecords;
- (id)initWithSchema:(id)arg1 store:(id)arg2;
- (bool)isDirty;
- (bool)needsFirstSync;
- (id)schema;
- (void)setStore:(id)arg1;
- (id)store;

@end
