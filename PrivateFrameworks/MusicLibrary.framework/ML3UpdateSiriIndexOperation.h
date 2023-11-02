
@interface ML3UpdateSiriIndexOperation : ML3DatabaseOperation {
    NSMutableArray * _donators;
}

@property (nonatomic, readonly) NSMutableArray *donators;

- (void).cxx_destruct;
- (void)_enumerateUserIDsWithBlock:(id /* block */)arg1;
- (bool)_execute:(id*)arg1;
- (bool)_performFullIndexToRevision:(long long)arg1 withDatasetStream:(id)arg2;
- (bool)_performIncrementalIndexToRevision:(long long)arg1 withDatasetStream:(id)arg2;
- (id)donators;
- (unsigned long long)type;

@end
