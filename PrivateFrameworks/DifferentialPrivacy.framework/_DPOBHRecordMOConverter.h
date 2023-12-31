
@interface _DPOBHRecordMOConverter : NSObject <_DPRecordConverter>

- (bool)copyRecord:(id)arg1 intoManagedObject:(id)arg2;
- (id)createRecordFromManagedObject:(id)arg1;
- (id)insertRecord:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)insertRecords:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)updateRecords:(id)arg1 inManagedObjectContext:(id)arg2;

@end
