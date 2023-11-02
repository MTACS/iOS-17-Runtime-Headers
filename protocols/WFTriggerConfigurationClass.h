
@protocol WFTriggerConfigurationClass <NSObject>

@required

- (<WFTriggerConfigurationViewControllerDelegate> *)delegate;
- (id)initWithTrigger:(WFTrigger *)arg1 mode:(unsigned long long)arg2;
- (void)setDelegate:(id <WFTriggerConfigurationViewControllerDelegate>)arg1;

@end
