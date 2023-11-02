
@protocol BNConsidering <NSObject>

@required

- (long long)shouldOverlapPresentable:(id <BNPresentable>)arg1 withPresentable:(id <BNPresentable>)arg2;
- (long long)shouldPresentPresentable:(id <BNPresentable>)arg1 withPresentedPresentables:(NSArray *)arg2 responsiblePresentable:(out id*)arg3;

@optional

- (<BNConsideringDelegate> *)delegate;
- (void)setDelegate:(id <BNConsideringDelegate>)arg1;
- (long long)shouldPostPresentable:(id <BNPresentable>)arg1 userInfo:(NSDictionary *)arg2 reason:(out id*)arg3;

@end
