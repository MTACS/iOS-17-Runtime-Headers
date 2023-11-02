
@interface VUIPlistMediaItemEntityTypesOperation : VUIAsynchronousOperation {
    VUIPlistMediaDatabase * _database;
    NSError * _error;
    VUIMediaItemEntityTypesFetchResponse * _response;
}

@property (nonatomic, retain) VUIPlistMediaDatabase *database;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) VUIMediaItemEntityTypesFetchResponse *response;

- (void).cxx_destruct;
- (id)database;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (id)response;
- (void)setDatabase:(id)arg1;
- (void)setError:(id)arg1;
- (void)setResponse:(id)arg1;

@end
