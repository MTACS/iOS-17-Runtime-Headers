
@protocol IKDocumentServiceRequestDelegate <IKServiceRequestDelegate>

@optional

- (void)documentDidChangeForDocumentServiceRequest:(IKDocumentServiceRequest *)arg1;
- (void)responseDictionaryDidChangeForDocumentServiceRequest:(IKDocumentServiceRequest *)arg1;

@end
