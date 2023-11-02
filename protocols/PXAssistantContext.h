
@protocol PXAssistantContext <NSObject>

@required

- (NSArray *)initialStepContextIdentifiers;
- (NSString *)nextStepContextIdentifierFromStepContextIdentifier:(NSString *)arg1;
- (PXAssistantStepContext *)stepContextForStepContextIdentifier:(NSString *)arg1;

@optional

- (void)setAssistantTraitCollection:(PXAssistantTraitCollection *)arg1;
- (bool)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(NSString *)arg1;
- (void)stepContextWithIdentifier:(void *)arg1 confirmCancellationWithAlertProperties:(void *)arg2; // needs 2 arg types, found 12: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSString *, NSString *, NSString *, unsigned long long, void*
- (void)willCancelAssistant;

@end
