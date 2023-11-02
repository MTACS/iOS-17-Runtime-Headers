
@interface HMDBackingStoreFetchArchiveOperation : HMDBackingStoreOperation {
    id /* block */  _fetchResult;
    NSString * _identifier;
}

@property (nonatomic, copy) id /* block */ fetchResult;
@property (copy) NSString *identifier;

- (void).cxx_destruct;
- (id /* block */)fetchResult;
- (id)identifier;
- (id)initWithFetchResult:(id /* block */)arg1;
- (id)mainReturningError;
- (void)setFetchResult:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;

@end
