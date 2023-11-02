
@interface _ATXIconLocation : NSObject {
    bool  _appearOnlyInAppLibrary;
    NSIndexPath * _indexPath;
    bool  _isInstalled;
    bool  _isOnDock;
}

@property (nonatomic, readonly) bool appearOnlyInAppLibrary;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool isOnDock;

- (void).cxx_destruct;
- (bool)appearOnlyInAppLibrary;
- (id)indexPath;
- (id)initWithIndexPath:(id)arg1 isOnDock:(bool)arg2 existsInAppLibraryOnly:(bool)arg3 isInstalled:(bool)arg4;
- (bool)isInstalled;
- (bool)isOnDock;

@end
