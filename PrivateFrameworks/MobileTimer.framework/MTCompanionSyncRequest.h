
@interface MTCompanionSyncRequest : NSObject <MTSyncToken> {
    bool  _completed;
    NSMutableArray * _completionBlocks;
    NSError * _error;
    unsigned long long  _requestType;
    <NAScheduler> * _serializer;
}

@property (nonatomic) bool completed;
@property (nonatomic, retain) NSMutableArray *completionBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (readonly) Class superclass;

+ (id)requestWithType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)complete:(id)arg1;
- (bool)completed;
- (id)completionBlocks;
- (id)description;
- (id)error;
- (id)initWithRequestType:(unsigned long long)arg1;
- (id)requestDescription;
- (unsigned long long)requestType;
- (id)serializer;
- (void)setCompleted:(bool)arg1;
- (void)setCompletionBlocks:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setSerializer:(id)arg1;

@end
