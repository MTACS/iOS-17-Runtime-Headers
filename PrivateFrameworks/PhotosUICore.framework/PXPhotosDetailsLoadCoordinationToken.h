
@interface PXPhotosDetailsLoadCoordinationToken : NSObject {
    PXPhotosDetailsLoadCoordinator * __loadCoordinator;
    bool  _didComplete;
}

@property (nonatomic, readonly) PXPhotosDetailsLoadCoordinator *_loadCoordinator;

- (void).cxx_destruct;
- (id)_initWithLoadCoordinator:(id)arg1;
- (id)_loadCoordinator;
- (void)_timeout;
- (void)complete;
- (void)dealloc;
- (id)init;

@end
