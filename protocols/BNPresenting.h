
@protocol BNPresenting <NSObject>

@required

- (NSArray *)allPresentables;
- (<BNConsidering> *)authority;
- (NSArray *)dismissPresentablesWithIdentification:(id <BNPresentableIdentifying><BNPresentableUniquelyIdentifying>)arg1 reason:(NSString *)arg2 animated:(bool)arg3 userInfo:(NSDictionary *)arg4;
- (NSArray *)dismissPresentablesWithIdentification:(id <BNPresentableIdentifying><BNPresentableUniquelyIdentifying>)arg1 reason:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (id)initWithAuthority:(id <BNConsidering>)arg1;
- (<BNPosting> *)poster;
- (void)presentPresentable:(id <BNPresentable>)arg1 withOptions:(unsigned long long)arg2 userInfo:(NSDictionary *)arg3;
- (NSArray *)presentedPresentables;
- (void)setPoster:(id <BNPosting>)arg1;
- (NSArray *)topPresentables;

@optional

- (NSArray *)dismissAllPresentablesWithRequesterIdentifier:(NSString *)arg1 withReason:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (NSArray *)dismissPresentableWithRequestIdentifier:(NSString *)arg1 requesterIdentifier:(NSString *)arg2 reason:(NSString *)arg3 animated:(bool)arg4 userInfo:(NSDictionary *)arg5;
- (NSArray *)dismissPresentableWithRequestIdentifier:(NSString *)arg1 requesterIdentifier:(NSString *)arg2 reason:(NSString *)arg3 userInfo:(NSDictionary *)arg4;

@end
