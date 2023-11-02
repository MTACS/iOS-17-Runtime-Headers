
@protocol CKRecordObservable <NSObject>

@required

- (void)addRecordObserver:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: CKRecordObserver *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKRecordChange *, void*
- (void)removeRecordObserver:(CKRecordObserver *)arg1;

@end
