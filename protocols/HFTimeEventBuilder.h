
@protocol HFTimeEventBuilder <NSObject>

@required

- (NSString *)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(HMHome *)arg2 recurrences:(NSArray *)arg3;
- (NSString *)naturalLanguageNameWithOptions:(HFTriggerNaturalLanguageOptions *)arg1 recurrences:(NSArray *)arg2;
- (NAFuture *)performValidation;

@end
