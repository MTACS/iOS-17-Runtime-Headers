
@interface FBKSearchIndex : NSObject {
    int  _isSearching;
    NSManagedObjectContext * _managedObjectContext;
}

@property (retain) NSManagedObjectContext *managedObjectContext;

- (void).cxx_destruct;
- (void)asynchronouslySearchWithQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)managedObjectContext;
- (void)setManagedObjectContext:(id)arg1;

@end
