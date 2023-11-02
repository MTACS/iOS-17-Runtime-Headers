
@interface PUPhotosGridDownloadHelpContext : NSObject {
    id /* block */  _downloadHandler;
    NSString * _gridProgressIdentifier;
    PHResourceLocalAvailabilityRequest * _resourceLocalAvailabilityRequest;
}

@property (nonatomic, copy) id /* block */ downloadHandler;
@property (nonatomic, retain) NSString *gridProgressIdentifier;
@property (nonatomic, retain) PHResourceLocalAvailabilityRequest *resourceLocalAvailabilityRequest;

- (void).cxx_destruct;
- (id /* block */)downloadHandler;
- (id)gridProgressIdentifier;
- (id)resourceLocalAvailabilityRequest;
- (void)setDownloadHandler:(id /* block */)arg1;
- (void)setGridProgressIdentifier:(id)arg1;
- (void)setResourceLocalAvailabilityRequest:(id)arg1;

@end
