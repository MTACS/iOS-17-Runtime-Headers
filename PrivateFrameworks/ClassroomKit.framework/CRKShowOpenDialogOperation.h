
@interface CRKShowOpenDialogOperation : CATOperation {
    double  _cleanupDelay;
    <CRKFileSystemPrimitives> * _fileSystemPrimitives;
    <CRKSharingPrimitives> * _sharingPrimitives;
    <CRKSharingAirDropTransfer> * _transfer;
    bool  mAutoAccept;
    NSString * mFilesDescription;
    bool  mKeepOriginalFiles;
    NSData * mPreviewImageData;
    NSString * mSenderName;
    NSString * mSourceBundleIdentifier;
    bool  mTransferAccepted;
    NSURL * mTransferDirectoryURL;
    bool  mTransferFinished;
    NSSet * mURLs;
}

@property (nonatomic, readonly) double cleanupDelay;
@property (nonatomic, readonly) <CRKFileSystemPrimitives> *fileSystemPrimitives;
@property (nonatomic, readonly) <CRKSharingPrimitives> *sharingPrimitives;
@property (nonatomic, retain) <CRKSharingAirDropTransfer> *transfer;

+ (id)fakeBundleID;

- (void).cxx_destruct;
- (void)cancel;
- (double)cleanupDelay;
- (void)cleanupHiddenTransferItemsIfNeeded;
- (void)failWithError:(id)arg1;
- (id)fileSystemPrimitives;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(bool)arg5;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(bool)arg5 sourceBundleIdentifier:(id)arg6;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(bool)arg5 sourceBundleIdentifier:(id)arg6 filesDescription:(id)arg7;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(bool)arg5 sourceBundleIdentifier:(id)arg6 filesDescription:(id)arg7 cleanupDelay:(double)arg8 sharingPrimitives:(id)arg9 fileSystemPrimitives:(id)arg10;
- (bool)isAsynchronous;
- (void)main;
- (void)setTransfer:(id)arg1;
- (id)sharingPrimitives;
- (void)startTransfer;
- (void)succeedIfNeeded;
- (id)transfer;
- (void)transferDidFinishWithSuccess:(bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferDidProgressWithSuccess:(bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferDidStartWithSuccess:(bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferWithIdentifierWasAccepted:(id)arg1;
- (void)transferWithIdentifierWasDeclined:(id)arg1 error:(id)arg2;

@end
