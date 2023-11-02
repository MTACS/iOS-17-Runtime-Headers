
@interface _HMEventOrTimerTriggerBuilder : _HMTriggerBuilder {
    unsigned long long  _recurrenceDays;
}

@property (nonatomic) unsigned long long recurrenceDays;
@property (nonatomic, copy) NSArray *recurrences;

- (unsigned long long)recurrenceDays;
- (id)recurrences;
- (void)setRecurrenceDays:(unsigned long long)arg1;
- (void)setRecurrences:(id)arg1;
- (void)updateRecurrences:(id)arg1 completionHandler:(id /* block */)arg2;

@end
