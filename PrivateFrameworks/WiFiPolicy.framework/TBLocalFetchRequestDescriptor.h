
@interface TBLocalFetchRequestDescriptor : NSObject {
    NSFetchRequest * _fetchRequest;
    NSFetchRequest * _localFetchRequest;
}

@property (nonatomic, readonly) NSFetchRequest *fetchRequest;
@property (nonatomic, retain) NSFetchRequest *localFetchRequest;

- (void).cxx_destruct;
- (id)fetchRequest;
- (id)initWithFetchRequest:(id)arg1;
- (id)localFetchRequest;
- (void)setLocalFetchRequest:(id)arg1;

@end
