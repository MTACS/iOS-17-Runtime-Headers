
@interface _VUILibrarySeeAllController : NSObject {
    VUILibraryGridCollectionViewController * _gridViewController;
    long long  _shelfType;
}

@property (nonatomic, retain) VUILibraryGridCollectionViewController *gridViewController;
@property (nonatomic) long long shelfType;

- (void).cxx_destruct;
- (id)gridViewController;
- (void)setGridViewController:(id)arg1;
- (void)setShelfType:(long long)arg1;
- (long long)shelfType;

@end
