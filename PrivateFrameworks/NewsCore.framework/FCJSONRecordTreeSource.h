
@interface FCJSONRecordTreeSource : NSObject <FCJSONRecordTreeSourceType> {
    <FCContentContext> * _context;
    NSArray * _jsonRecordSources;
}

@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) NSArray *jsonRecordSources;

- (void).cxx_destruct;
- (id)context;
- (void)fetchRecordTreeWithRootIDs:(id)arg1 branchKeysByRecordType:(id)arg2 cachePolicy:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchRecordTreeWithRootIDs:(id)arg1 branchKeysByRecordType:(id)arg2 cachePolicy:(id)arg3 edgeCacheHint:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithContext:(id)arg1 jsonRecordSources:(id)arg2;
- (id)jsonRecordSources;
- (void)setContext:(id)arg1;
- (void)setJsonRecordSources:(id)arg1;

@end
