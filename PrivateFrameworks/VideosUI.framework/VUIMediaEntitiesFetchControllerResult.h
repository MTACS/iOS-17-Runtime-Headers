
@interface VUIMediaEntitiesFetchControllerResult : NSObject {
    long long  _fetchReason;
    NSArray * _fetchResponseChanges;
    NSArray * _fetchResponses;
}

@property (nonatomic) long long fetchReason;
@property (nonatomic, copy) NSArray *fetchResponseChanges;
@property (nonatomic, copy) NSArray *fetchResponses;

- (void).cxx_destruct;
- (id)description;
- (long long)fetchReason;
- (id)fetchResponseChanges;
- (id)fetchResponses;
- (id)init;
- (id)initWithFetchReason:(long long)arg1 fetchResponses:(id)arg2;
- (void)setFetchReason:(long long)arg1;
- (void)setFetchResponseChanges:(id)arg1;
- (void)setFetchResponses:(id)arg1;

@end
