
@interface PUHidePhotosActionController : NSObject {
    PXHideAssetsAction * _action;
    NSArray * _assets;
    NSUndoManager * _undoManager;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(id /* block */)arg1;
- (id)assets;
- (id)initWithAssets:(id)arg1 undoManager:(id)arg2;
- (void)performActionWithCompletionHandler:(id /* block */)arg1;
- (id)undoManager;

@end
