
@protocol BNPosting <NSObject>

@required

- (bool)postPresentable:(id <BNPresentable>)arg1 withOptions:(unsigned long long)arg2 userInfo:(NSDictionary *)arg3 error:(out id*)arg4;
- (NSArray *)revokePresentablesWithIdentification:(id <BNPresentableIdentifying><BNPresentableUniquelyIdentifying>)arg1 reason:(NSString *)arg2 options:(unsigned long long)arg3 userInfo:(NSDictionary *)arg4 error:(out id*)arg5;

@optional

- (bool)revokeAllPresentablesWithRequesterIdentifier:(NSString *)arg1 reason:(NSString *)arg2 options:(unsigned long long)arg3 userInfo:(NSDictionary *)arg4 error:(out id*)arg5;
- (bool)revokePresentableWithRequestIdentifier:(NSString *)arg1 requesterIdentifier:(NSString *)arg2 reason:(NSString *)arg3 options:(unsigned long long)arg4 userInfo:(NSDictionary *)arg5 error:(out id*)arg6;

@end
