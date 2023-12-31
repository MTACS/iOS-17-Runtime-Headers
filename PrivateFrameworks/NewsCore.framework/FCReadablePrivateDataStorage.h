
@interface FCReadablePrivateDataStorage : NSObject <FCReadablePrivateDataStorage> {
    FCFileCoordinatedTodayDropbox * _dropbox;
    FCFileCoordinatedTodayPrivateDataTransactionQueue * _transactionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FCFileCoordinatedTodayDropbox *dropbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCFileCoordinatedTodayPrivateDataTransactionQueue *transactionQueue;

- (void).cxx_destruct;
- (id)dropbox;
- (id)init;
- (id)initWithDropbox:(id)arg1 transactionQueue:(id)arg2;
- (void)readPrivateDataWithAccessor:(id /* block */)arg1;
- (void)setDropbox:(id)arg1;
- (void)setTransactionQueue:(id)arg1;
- (id)transactionQueue;

@end
