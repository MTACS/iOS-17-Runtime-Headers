
@interface DAEGroupExpansionContext : NSObject {
    NSString * _accountID;
    id /* block */  _completionBlock;
    NSString * _principalPath;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _results;
    bool  _shouldSyncCalendar;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) NSString *principalPath;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSDictionary *results;
@property (nonatomic) bool shouldSyncCalendar;

- (void).cxx_destruct;
- (id)accountID;
- (id /* block */)completionBlock;
- (void)finishedWithError:(id)arg1;
- (id)initWithCompletionBlock:(id /* block */)arg1;
- (id)principalPath;
- (id)queue;
- (id)results;
- (void)setResults:(id)arg1;
- (void)setShouldSyncCalendar:(bool)arg1;
- (bool)shouldSyncCalendar;

@end
