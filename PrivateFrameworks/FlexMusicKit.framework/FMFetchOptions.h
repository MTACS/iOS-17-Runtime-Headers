
@interface FMFetchOptions : NSObject {
    NSPredicate * _predicate;
    NSArray * _sortDescriptors;
}

@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) NSArray *sortDescriptors;

- (void).cxx_destruct;
- (id)init;
- (id)predicate;
- (void)setPredicate:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
