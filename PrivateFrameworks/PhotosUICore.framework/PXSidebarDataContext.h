
@interface PXSidebarDataContext : NSObject {
    NSPredicate * _assetsFilterPredicate;
    <PXSidebarDataSectionEnablement> * _enablementProvider;
    PXLibraryFilterState * _libraryFilterState;
    NSOperationQueue * _workQueue;
}

@property (nonatomic, readonly) NSPredicate *assetsFilterPredicate;
@property (nonatomic, readonly) <PXSidebarDataSectionEnablement> *enablementProvider;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) NSOperationQueue *workQueue;

- (void).cxx_destruct;
- (id)assetsFilterPredicate;
- (id)enablementProvider;
- (id)init;
- (id)initWithLibraryFilterState:(id)arg1 workQueue:(id)arg2 enablementProvider:(id)arg3 assetsFilterPredicate:(id)arg4;
- (id)libraryFilterState;
- (id)workQueue;

@end
