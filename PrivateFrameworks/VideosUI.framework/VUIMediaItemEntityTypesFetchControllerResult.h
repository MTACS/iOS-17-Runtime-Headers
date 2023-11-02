
@interface VUIMediaItemEntityTypesFetchControllerResult : NSObject {
    VUIMediaItemEntityTypesFetchResponseChanges * _fetchChanges;
    long long  _fetchReason;
    VUIMediaItemEntityTypesFetchResponse * _fetchResponse;
}

@property (nonatomic, retain) VUIMediaItemEntityTypesFetchResponseChanges *fetchChanges;
@property (nonatomic) long long fetchReason;
@property (nonatomic, retain) VUIMediaItemEntityTypesFetchResponse *fetchResponse;

- (void).cxx_destruct;
- (id)description;
- (id)fetchChanges;
- (long long)fetchReason;
- (id)fetchResponse;
- (id)init;
- (id)initWithFetchReason:(long long)arg1 fetchResponse:(id)arg2;
- (void)setFetchChanges:(id)arg1;
- (void)setFetchReason:(long long)arg1;
- (void)setFetchResponse:(id)arg1;

@end
