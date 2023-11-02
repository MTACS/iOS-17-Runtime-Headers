
@interface FinanceKitUI.OrderNavigationModel : NSObject <NSFetchedResultsControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _path;
    void cancellableSet;
    void context;
    void fetchController;
}

- (void).cxx_destruct;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (id)init;

@end
