
@interface _ML3MultiUserAccountChangeOperation : MSVAsyncOperation {
    <MLMediaLibraryAccountChangeObserver> * _accountChangeObserver;
    NSString * _databasePath;
}

@property (nonatomic) <MLMediaLibraryAccountChangeObserver> *accountChangeObserver;
@property (nonatomic, readonly, copy) NSString *databasePath;

- (void).cxx_destruct;
- (id)accountChangeObserver;
- (id)databasePath;
- (void)execute;
- (id)initWithDatabasePath:(id)arg1 accountChangeObserver:(id)arg2;
- (void)setAccountChangeObserver:(id)arg1;

@end
