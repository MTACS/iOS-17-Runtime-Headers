
@protocol BNPostingPrivate <BNPosting>

@required

- (NSArray *)revokePresentablesWithIdentification:(id <BNPresentableUniquelyIdentifying>)arg1 reason:(NSString *)arg2 options:(unsigned long long)arg3 animated:(bool)arg4 userInfo:(NSDictionary *)arg5 error:(out id*)arg6;

@optional

- (bool)revokePresentableWithRequestIdentifier:(NSString *)arg1 requesterIdentifier:(NSString *)arg2 reason:(NSString *)arg3 options:(unsigned long long)arg4 animated:(bool)arg5 userInfo:(NSDictionary *)arg6 error:(out id*)arg7;

@end
