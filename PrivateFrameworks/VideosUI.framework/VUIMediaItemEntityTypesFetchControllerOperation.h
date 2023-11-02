
@interface VUIMediaItemEntityTypesFetchControllerOperation : VUIMediaLibraryOperation {
    VUIMediaItemEntityTypesFetchResponse * _currentFetchResponse;
    long long  _fetchReason;
    VUIMediaItemEntityTypesFetchControllerResult * _result;
}

@property (nonatomic, retain) VUIMediaItemEntityTypesFetchResponse *currentFetchResponse;
@property (nonatomic) long long fetchReason;
@property (nonatomic, retain) VUIMediaItemEntityTypesFetchControllerResult *result;

+ (id)_changeSetFromMediaItemEntityTypes:(id)arg1 toMediaItemEntityTypes:(id)arg2;

- (void).cxx_destruct;
- (id)currentFetchResponse;
- (void)executionDidBegin;
- (long long)fetchReason;
- (id)initWithMediaLibrary:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2;
- (id)result;
- (void)setCurrentFetchResponse:(id)arg1;
- (void)setFetchReason:(long long)arg1;
- (void)setResult:(id)arg1;

@end
