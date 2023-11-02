
@protocol HMActionSetBuilderInternal <HMActionSetBuilder, HMAutomationBuilderInternal, HMActionSetConfiguration>

@required

- (HMActionSetBuilder *)copyAsBuilder;
- (id)initWithActionSet:(HMActionSet *)arg1;
- (id)initWithContext:(_HMContext *)arg1 home:(HMHome *)arg2;
- (id)initWithType:(NSString *)arg1 context:(_HMContext *)arg2 home:(HMHome *)arg3;
- (bool)isEmpty;

@end
