
@interface WFRemoteExecutionOutgoingFileSession : WFRemoteExecutionSession {
    NSURL * _fileURL;
    NSString * _requestIdentifier;
    NSString * _transferIdentifier;
}

@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic, retain) NSString *transferIdentifier;

+ (bool)supportsVersion:(long long)arg1;
+ (long long)version;

- (void).cxx_destruct;
- (void)fileSentWithSuccess:(bool)arg1 error:(id)arg2;
- (id)fileURL;
- (void)finishWithError:(id)arg1;
- (id)initWithService:(id)arg1 fileURL:(id)arg2 transferIdentifier:(id)arg3 requestIdentifier:(id)arg4;
- (id)requestIdentifier;
- (bool)sendToDestinations:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setFileURL:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setTransferIdentifier:(id)arg1;
- (id)transferIdentifier;

@end
