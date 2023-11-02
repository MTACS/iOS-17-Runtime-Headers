
@interface _MSMessageExtensionRemoteViewController : _UIRemoteViewController {
    bool  _needsSizeMatchBeforeSnapshotSwap;
    bool  _providesExplicitSizeSnapshot;
    bool  _readyToDisplay;
    NSUUID * _requestUUID;
    NSExtension * _weakExtension;
}

@property (nonatomic) bool needsSizeMatchBeforeSnapshotSwap;
@property (nonatomic) bool providesExplicitSizeSnapshot;
@property (getter=isReadyToDisplay, nonatomic) bool readyToDisplay;
@property (nonatomic, retain) NSUUID *requestUUID;
@property (nonatomic) NSExtension *weakExtension;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)isReadyToDisplay;
- (bool)needsSizeMatchBeforeSnapshotSwap;
- (bool)providesExplicitSizeSnapshot;
- (id)requestUUID;
- (void)setNeedsSizeMatchBeforeSnapshotSwap:(bool)arg1;
- (void)setProvidesExplicitSizeSnapshot:(bool)arg1;
- (void)setReadyToDisplay:(bool)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setWeakExtension:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)weakExtension;

@end
