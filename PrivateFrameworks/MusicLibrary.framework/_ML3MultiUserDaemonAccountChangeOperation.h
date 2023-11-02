
@interface _ML3MultiUserDaemonAccountChangeOperation : MSVAsyncOperation {
    <MLMediaLibraryAccountChangeObserver> * _accountChangeObserver;
    <_ML3MultiUserDaemonAccountChangeOperationDelegate> * _delegate;
    NSString * _finalDSID;
    NSString * _initialDSID;
}

@property (nonatomic, retain) <MLMediaLibraryAccountChangeObserver> *accountChangeObserver;
@property (nonatomic) <_ML3MultiUserDaemonAccountChangeOperationDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *finalDSID;
@property (nonatomic, readonly, copy) NSString *initialDSID;

- (void).cxx_destruct;
- (id)accountChangeObserver;
- (id)delegate;
- (void)execute;
- (id)finalDSID;
- (id)initWithInitialDSID:(id)arg1 finalDSID:(id)arg2 accountChangeObserver:(id)arg3;
- (id)initialDSID;
- (void)setAccountChangeObserver:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
