
@interface ICQueryResultsControllerObjC : NSObject {
    void managedObjectContext;
    void query;
}

@property (nonatomic, readonly) id fetchRequest;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) ICQueryObjC *query;

- (void).cxx_destruct;
- (id)fetchRequest;
- (id)init;
- (id)initWithManagedObjectContext:(id)arg1 query:(id)arg2;
- (id)managedObjectContext;
- (id)performFetch;
- (id)query;
- (void)setQuery:(id)arg1;

@end
