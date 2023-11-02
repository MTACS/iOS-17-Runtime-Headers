
@interface PXSharedLibraryRulePeopleDataManager : NSObject <PXChangeObserver> {
    NSArray * _currentPersonIdentifiers;
    PXSharedLibraryRule * _currentSharedLibraryRule;
    NSDiffableDataSourceSnapshot * _currentSnapshot;
    <PXSharedLibraryRulePeopleDataManagerDelegate> * _delegate;
    NSString * _statusMessage;
    PXSharedLibraryStatusProvider * _statusProvider;
}

@property (nonatomic, readonly) NSArray *currentPersonIdentifiers;
@property (nonatomic, readonly) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSharedLibraryRulePeopleDataManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *statusMessage;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCurrentSnapshot;
- (void)_updateIfNeeded;
- (id)currentPersonIdentifiers;
- (id)currentSnapshot;
- (id)delegate;
- (id)initWithSharedLibraryStatusProvider:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDelegate:(id)arg1;
- (id)statusMessage;
- (id)statusProvider;

@end
