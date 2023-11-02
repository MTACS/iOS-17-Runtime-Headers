
@interface WFUlyssesAttachAction : WFInterchangeAction

- (id)attachmentType;
- (id)contentDestinationWithError:(id*)arg1;
- (id)inputContentClasses;
- (bool)inputPassthrough;
- (bool)inputRequired;

@end
