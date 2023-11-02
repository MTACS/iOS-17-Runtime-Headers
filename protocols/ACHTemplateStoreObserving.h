
@protocol ACHTemplateStoreObserving <NSObject>

@required

- (void)templateStore:(ACHTemplateStore *)arg1 didAddNewTemplates:(NSArray *)arg2;
- (void)templateStore:(ACHTemplateStore *)arg1 didRemoveTemplates:(NSArray *)arg2;

@optional

- (void)templateStoreDidFinishInitialFetch:(ACHTemplateStore *)arg1;

@end
