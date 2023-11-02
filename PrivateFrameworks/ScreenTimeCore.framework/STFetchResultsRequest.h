
@interface STFetchResultsRequest : NSObject {
    NSFetchRequest * _fetchRequest;
}

@property (nonatomic, readonly) NSFetchRequest *fetchRequest;

+ (id)requestWithFetchRequest:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)fetchRequest;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntity:(id)arg1 predicate:(id)arg2;
- (id)initWithEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithFetchRequest:(id)arg1;

@end
