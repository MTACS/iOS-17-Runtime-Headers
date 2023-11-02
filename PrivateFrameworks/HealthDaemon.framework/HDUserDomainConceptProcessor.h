
@interface HDUserDomainConceptProcessor : NSObject

+ (bool)processUserDomainConceptsAfter:(long long)arg1 transactionLimit:(long long)arg2 outAnchor:(long long*)arg3 outProcessedConceptsCount:(long long*)arg4 transaction:(id)arg5 error:(id*)arg6;

- (id)init;

@end
