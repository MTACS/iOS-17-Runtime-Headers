
@interface SYDocumentWorkflowsServiceHandle : NSObject <SYDocumentWorkflowsServiceInterface> {
    SYDocumentWorkflowsRepository * _repository;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SYDocumentWorkflowsRepository *repository;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createOpenLastModifiedDocumentImpl;
- (id)_fallbackUserActivityForDocumentWithAttributes:(id)arg1;
- (id)_fetchUserActivityWithRelatedUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (void)fetchAttributesForDocumentsWithIndexKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchUserActivityForDocumentIndexKey:(id)arg1 completion:(id /* block */)arg2;
- (void)hasLastModifiedDocument:(id)arg1 completion:(id /* block */)arg2;
- (void)hasOriginalDocumentForFileAtURL:(id)arg1 withAttributes:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithRepository:(id)arg1;
- (void)openLastModifiedDocument:(id)arg1 completion:(id /* block */)arg2;
- (id)repository;
- (void)returnToSenderDocument:(id)arg1 withAttributes:(id)arg2 shouldCreateNewMessage:(bool)arg3 completion:(id /* block */)arg4;
- (void)saveUserActivity:(id)arg1 forDocumentIndexKey:(id)arg2 sourceBundleIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)unlinkDocumentsWithRelatedUniqueIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)updateLinkedDocumentsWithCompletion:(id /* block */)arg1;

@end
