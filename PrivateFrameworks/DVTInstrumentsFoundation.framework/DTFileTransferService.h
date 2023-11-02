
@interface DTFileTransferService : DTXService <DTFileTransferServiceDebugInboxAuthorizedAPI> {
    NSMutableArray * _activeFileTransfers;
    NSObject<OS_dispatch_queue> * _coordinationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (id)_beginTransferOfFileNamed:(id)arg1 outError:(id*)arg2;
- (bool)_fileTransfer:(id)arg1 isValidForApplication:(id)arg2;
- (id)_moveFileTransfer:(id)arg1 inDataContainerOfApplicationBundleIdentifier:(id)arg2 withError:(id*)arg3;
- (id)_moveFileTransfer:(id)arg1 toDebugInboxOfApplicationWithBundleIdentifier:(id)arg2 outError:(id*)arg3;
- (bool)_unarchivePackageIfNecessary:(id)arg1;
- (id)initWithChannel:(id)arg1;
- (id)openFileInDocumentDebugInbox:(id)arg1 forApplicationWithBundleIdentifier:(id)arg2 withAnnotation:(id)arg3;
- (id)transferData:(id)arg1 intoAppContainerForBundleIdentifier:(id)arg2 filename:(id)arg3;
- (id)transferFile:(id)arg1 toDebugInboxOfApplicationWithBundleIdentifier:(id)arg2 destinationFilename:(id)arg3;

@end
