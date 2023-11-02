
@protocol HDDataObserver <NSObject>

@required

- (void)samplesAdded:(NSArray *)arg1 anchor:(NSNumber *)arg2;

@optional

- (void)didAddSamplesOfTypes:(NSSet *)arg1 anchor:(NSNumber *)arg2;
- (void)samplesJournaled:(NSArray *)arg1 type:(HKSampleType *)arg2;
- (void)samplesOfTypesWereRemoved:(NSArray *)arg1 anchor:(NSNumber *)arg2;

@end
