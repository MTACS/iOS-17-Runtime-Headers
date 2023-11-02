
@interface PXSidebarImageRequestDetails : NSObject {
    PXMediaProvider * _mediaProvider;
    NSIndexSet * _mediaRequestIDs;
    long long  _sidebarRequestID;
}

@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, copy) NSIndexSet *mediaRequestIDs;
@property (nonatomic, readonly) long long sidebarRequestID;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (id)initWithMediaProvider:(id)arg1 mediaRequestIDs:(id)arg2;
- (id)mediaProvider;
- (id)mediaRequestIDs;
- (void)setMediaRequestIDs:(id)arg1;
- (long long)sidebarRequestID;

@end
