
@interface FCFetchGroup : NSObject {
    id /* block */  _completion;
    NSObject<OS_dispatch_queue> * _completionQueue;
    id  _context;
    bool  _isUserFacing;
    NSSet * _keys;
    unsigned long long  _numberOfFetchAttempts;
    long long  _qualityOfService;
    long long  _relativePriority;
    NSDate * _requestDate;
    bool  _shouldFilter;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, retain) NSDate *requestDate;

- (void).cxx_destruct;
- (long long)comparePriority:(id)arg1;
- (id /* block */)completion;
- (id)completionQueue;
- (id)requestDate;
- (void)setRequestDate:(id)arg1;

@end
