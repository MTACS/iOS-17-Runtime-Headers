
@interface SHSheetActivityPerformerResult : NSObject {
    UIActivity * _activity;
    long long  _completedState;
    NSError * _error;
    NSArray * _returnedItems;
}

@property (nonatomic, readonly) UIActivity *activity;
@property (nonatomic) long long completedState;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSArray *returnedItems;

- (void).cxx_destruct;
- (id)activity;
- (long long)completedState;
- (id)description;
- (id)error;
- (id)initWithActivity:(id)arg1 completedState:(long long)arg2 returnedItems:(id)arg3 error:(id)arg4;
- (id)returnedItems;
- (void)setCompletedState:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setReturnedItems:(id)arg1;

@end
