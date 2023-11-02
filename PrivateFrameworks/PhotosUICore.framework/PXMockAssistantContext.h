
@interface PXMockAssistantContext : NSObject <PXAssistantContext> {
    NSArray * _stepContextIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_stepContextWithIdentifier:(id)arg1 viewTitle:(id)arg2 firstButtonType:(long long)arg3;
- (id)init;
- (id)initialStepContextIdentifiers;
- (id)nextStepContextIdentifierFromStepContextIdentifier:(id)arg1;
- (id)stepContextForStepContextIdentifier:(id)arg1;

@end
