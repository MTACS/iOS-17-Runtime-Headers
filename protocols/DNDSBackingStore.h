
@protocol DNDSBackingStore <NSObject>

@required

- (<DNDSBackingStoreDelegate> *)delegate;
- (id)readRecordWithError:(id*)arg1;
- (void)setDelegate:(id <DNDSBackingStoreDelegate>)arg1;
- (unsigned long long)writeRecord:(id <DNDSBackingStoreRecord>)arg1 error:(id*)arg2;
- (unsigned long long)writeRecord:(id <DNDSBackingStoreRecord>)arg1 writePartition:(bool)arg2 error:(id*)arg3;

@end
