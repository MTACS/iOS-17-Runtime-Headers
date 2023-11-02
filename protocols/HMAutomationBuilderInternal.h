
@protocol HMAutomationBuilderInternal <NSObject>

@required

- (HMHome *)home;
- (id)initWithContext:(_HMContext *)arg1 home:(HMHome *)arg2;
- (NSUUID *)uniqueIdentifier;

@end
