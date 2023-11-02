
@interface XBLaunchImageDataProvider : NSObject <XBSnapshotDataProvider> {
    UIImage * _cachedImage;
    XBSnapshotDataProviderContext * _context;
    _FBSSnapshot * _snapshot;
}

@property (nonatomic, readonly, retain) XBSnapshotDataProviderContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)fetchImage;
- (id)initWithRequest:(id)arg1 contextID:(unsigned int)arg2 opaque:(bool)arg3;
- (void)invalidateImage;

@end
