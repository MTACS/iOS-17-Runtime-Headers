
@interface TSPTemporaryObjectContextDelegate : NSObject <TSPFileCoordinatorDelegate, TSPObjectContextDelegate> {
    NSError * _error;
    bool  _ignoreDocumentSupport;
    NSURL * _packageURL;
    NSMutableSet * _persistenceWarnings;
}

@property (nonatomic, readonly) bool areNewExternalReferencesToDataAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) <NSFilePresenter> *filePresenter;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreDocumentSupport;
@property (nonatomic, readonly) bool isDocumentSupportTemporary;
@property (nonatomic, copy) NSURL *packageURL;
@property (nonatomic, readonly) NSSet *persistenceWarnings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPersistenceWarnings:(id)arg1;
- (id)error;
- (bool)ignoreDocumentSupport;
- (id)init;
- (id)initWithPackageURL:(id)arg1;
- (id)packageURL;
- (void)performReadUsingAccessor:(id /* block */)arg1;
- (id)persistenceWarnings;
- (id)persistenceWarningsForData:(id)arg1 isReadable:(bool)arg2 isExternal:(bool)arg3;
- (void)presentPersistenceError:(id)arg1;
- (void)setIgnoreDocumentSupport:(bool)arg1;
- (void)setPackageURL:(id)arg1;

@end
