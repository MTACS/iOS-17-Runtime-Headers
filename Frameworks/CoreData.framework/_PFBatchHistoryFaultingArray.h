
@interface _PFBatchHistoryFaultingArray : _PFBatchFaultingArray {
    NSPersistentHistoryTransaction * _transaction;
}

+ (Class)classForKeyedUnarchiver;

- (void)_setTransaction:(id)arg1;
- (Class)classForCoder;
- (id)initWithPFBatchFaultingArray:(id)arg1;
- (id)transaction;

@end
