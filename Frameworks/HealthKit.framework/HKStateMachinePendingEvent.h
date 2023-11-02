
@interface HKStateMachinePendingEvent : NSObject {
    id /* block */  _completion;
    NSDate * _date;
    NSError * _error;
    long long  _event;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) long long event;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)date;
- (id)error;
- (long long)event;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setEvent:(long long)arg1;

@end
