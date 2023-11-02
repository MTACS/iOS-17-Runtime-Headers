
@protocol AVTAvatarRecordDataSource <NSObject>

@required

- (unsigned long long)indexOfRecordPassingTest:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, <AVTAvatarRecord> *, unsigned long long, bool*, void*
- (NSIndexSet *)indexSetForEditableRecords;
- (NSIndexSet *)indexesOfRecordsPassingTest:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, <AVTAvatarRecord> *, unsigned long long, bool*, void*
- (unsigned long long)numberOfRecords;
- (<AVTAvatarRecord> *)recordAtIndex:(unsigned long long)arg1;
- (<AVTAvatarStore> *)recordStore;

@end
