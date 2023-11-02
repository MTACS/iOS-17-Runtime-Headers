
@protocol SBPresentableIntercepting <NSObject>

@required

- (NSArray *)revocationRequestedForPresentablesWithIdentification:(id <BNPresentableIdentifying><BNPresentableUniquelyIdentifying>)arg1 reason:(NSString *)arg2;
- (bool)willInterceptPresentable:(id <BNPresentable>)arg1 userInfo:(NSDictionary *)arg2;

@end
