
@interface HDAttachmentManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver> {
    NSString * _filesDirectoryPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDProfile * _profile;
    NSMutableDictionary * _schemaProvidersByIdentifier;
    NSString * _unconfirmedFilesDirectoryPath;
    id /* block */  _unitTestdidCompleteFileCleanup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *filesDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *unconfirmedFilesDirectoryURL;
@property (nonatomic, copy) id /* block */ unitTestdidCompleteFileCleanup;

- (void).cxx_destruct;
- (id)_addReferenceWithAttachment:(id)arg1 toObjectWithIdentifier:(id)arg2 schemaIdentifier:(id)arg3 metadata:(id)arg4 error:(id*)arg5;
- (void)_cleanupAttachmentsFolder;
- (id)addAttachmentWithName:(id)arg1 contentTypeIdentifier:(id)arg2 fileHandle:(id)arg3 toObjectWithIdentifier:(id)arg4 schemaIdentifier:(id)arg5 attachmentMetadata:(id)arg6 referenceMetadata:(id)arg7 error:(id*)arg8;
- (id)addReferenceWithAttachment:(id)arg1 toObjectWithIdentifier:(id)arg2 schemaIdentifier:(id)arg3 metadata:(id)arg4 error:(id*)arg5;
- (bool)attachmentReferencesForAttachment:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
- (bool)attachmentReferencesForObjectIdentifier:(id)arg1 schemaIdentifier:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)fileHandleForAttachment:(id)arg1 error:(id*)arg2;
- (id)filesDirectoryURL;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (bool)insertAttachmentReferences:(id)arg1 attachment:(id)arg2 error:(id*)arg3;
- (bool)insertAttachmentReferences:(id)arg1 attachment:(id)arg2 fileData:(id)arg3 encrypt:(bool)arg4 error:(id*)arg5;
- (bool)insertAttachmentReferences:(id)arg1 attachment:(id)arg2 fileHandle:(id)arg3 encrypt:(bool)arg4 error:(id*)arg5;
- (void)profileDidBecomeReady:(id)arg1;
- (bool)readAuthorizationForObjectIdentifier:(id)arg1 schemaIdentifier:(id)arg2 client:(id)arg3 error:(id*)arg4;
- (id)readerForAttachment:(id)arg1 error:(id*)arg2;
- (bool)removeAllReferencesWithAttachmentIdentifier:(id)arg1 objectIdentifier:(id)arg2 schemaIdentifier:(id)arg3 error:(id*)arg4;
- (bool)removeAttachmentReferences:(id)arg1 error:(id*)arg2;
- (bool)removeAttachmentReferencesWithObjectIdentifier:(id)arg1 schemaIdentifier:(id)arg2 error:(id*)arg3;
- (bool)removeAttachmentReferencesWithObjectIdentifier:(id)arg1 schemaIdentifier:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)replaceReferencesWithObjectIdentifier:(id)arg1 replacementIdentifier:(id)arg2 schemaIdentifier:(id)arg3 error:(id*)arg4;
- (void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(id /* block */)arg2;
- (void)runMaintenanceOperationIfNeeded;
- (id)schemaProviderClasses;
- (id)schemaProviderForIdentifier:(id)arg1 error:(id*)arg2;
- (void)setUnitTestdidCompleteFileCleanup:(id /* block */)arg1;
- (id)unconfirmedFilesDirectoryURL;
- (id /* block */)unitTestdidCompleteFileCleanup;
- (bool)writeAuthorizationForObjectIdentifier:(id)arg1 schemaIdentifier:(id)arg2 client:(id)arg3 error:(id*)arg4;

@end
