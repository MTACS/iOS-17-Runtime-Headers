
@interface PLResourceLocalAvailabilityRequestOptions : NSObject {
    NSString * _clientBundleID;
    id /* block */  _dataHandler;
    CPLResourceTransferTaskOptions * _downloadOptions;
    bool  _networkAccessAllowed;
    NSString * _taskIdentifier;
    bool  _transient;
    bool  _wantsProgress;
}

@property (nonatomic, copy) NSString *clientBundleID;
@property (nonatomic, copy) id /* block */ dataHandler;
@property (nonatomic, copy) CPLResourceTransferTaskOptions *downloadOptions;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic, readonly) bool shouldPrioritize;
@property (nonatomic, copy) NSString *taskIdentifier;
@property (getter=isTransient, nonatomic) bool transient;
@property (nonatomic) bool wantsProgress;

- (void).cxx_destruct;
- (id)clientBundleID;
- (id /* block */)dataHandler;
- (id)downloadOptions;
- (id)init;
- (bool)isNetworkAccessAllowed;
- (bool)isTransient;
- (void)setClientBundleID:(id)arg1;
- (void)setDataHandler:(id /* block */)arg1;
- (void)setDownloadOptions:(id)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (void)setTransient:(bool)arg1;
- (void)setWantsProgress:(bool)arg1;
- (bool)shouldPrioritize;
- (id)taskIdentifier;
- (bool)wantsProgress;

@end
