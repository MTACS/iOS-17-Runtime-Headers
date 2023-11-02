
@interface PHBatchFetchingArrayFetchedClass : NSObject {
    Class  _fetchedObjectClass;
    Class  _fetchedPropertySetClass;
}

@property (retain) Class fetchedObjectClass;
@property (retain) Class fetchedPropertySetClass;

- (void).cxx_destruct;
- (Class)fetchedObjectClass;
- (Class)fetchedPropertySetClass;
- (id)initWithFetchedObjectClass:(Class)arg1;
- (id)initWithFetchedPropertySetClass:(Class)arg1;
- (void)setFetchedObjectClass:(Class)arg1;
- (void)setFetchedPropertySetClass:(Class)arg1;

@end
