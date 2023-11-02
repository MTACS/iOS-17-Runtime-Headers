
@interface SCKZone : NSObject {
    SCKZoneSchema * _schema;
    <SCKZoneStore> * _store;
}

@property (nonatomic, readonly, copy) SCKZoneDiff *clientDiff;
@property (nonatomic, readonly, copy) NSArray *clientRecords;
@property (getter=isDirty, nonatomic, readonly) bool dirty;
@property (nonatomic, readonly) bool needsFirstSync;
@property (nonatomic, readonly) SCKZoneSchema *schema;
@property (nonatomic, retain) <SCKZoneStore> *store;

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
