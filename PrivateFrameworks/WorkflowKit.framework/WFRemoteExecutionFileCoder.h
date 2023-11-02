
@interface WFRemoteExecutionFileCoder : WFFileCoder {
    WFRemoteExecutionCoordinator * _coordinator;
    id /* block */  _fileAvailabilityHandler;
    NSURL * _fileURL;
    NSString * _requestIdentifier;
    NSMutableArray * _transferIdentifiers;
}

@property (nonatomic) WFRemoteExecutionCoordinator *coordinator;
@property (nonatomic, copy) id /* block */ fileAvailabilityHandler;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic, retain) NSMutableArray *transferIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)archiveFileAtURL:(id)arg1 fileShouldBeDeletedOnDeallocation:(bool)arg2 withCoder:(id)arg3;
- (void)cancelOutstandingTransfers;
- (id)coordinator;
- (id)decodeFileWithCoder:(id)arg1 fileShouldBeDeletedOnDeallocation:(bool*)arg2 fileIsSecurityScoped:(bool*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)fileAvailabilityChanged;
- (id /* block */)fileAvailabilityHandler;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinator:(id)arg1 requestIdentifier:(id)arg2;
- (id)requestIdentifier;
- (void)setCoordinator:(id)arg1;
- (void)setFileAvailabilityHandler:(id /* block */)arg1;
- (void)setFileURL:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setTransferIdentifiers:(id)arg1;
- (long long)targetPlatform;
- (id)transferIdentifiers;
- (void)waitForFileAvailabilityWithCompletionHandler:(id /* block */)arg1;

@end
