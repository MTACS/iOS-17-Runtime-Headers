
@interface CNVCardParsingConcurrencyStrategy : NSObject

+ (bool)shouldTryConcurrentParsingForOptions:(id)arg1;
+ (id)strategyForOptions:(id)arg1;

@end
