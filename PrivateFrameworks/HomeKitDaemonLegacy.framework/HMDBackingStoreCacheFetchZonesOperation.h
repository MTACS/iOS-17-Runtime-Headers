
@interface HMDBackingStoreCacheFetchZonesOperation : HMDBackingStoreOperation {
    id /* block */  _fetchResult;
}

@property (nonatomic, copy) id /* block */ fetchResult;

- (void).cxx_destruct;
- (id /* block */)fetchResult;
- (id)initWithFetchResult:(id /* block */)arg1;
- (id)mainReturningError;
- (void)setFetchResult:(id /* block */)arg1;

@end
