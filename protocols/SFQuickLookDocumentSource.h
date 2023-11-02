
@protocol SFQuickLookDocumentSource <NSObject>

@required

- (NSData *)dataForQuickLookDocument:(SFQuickLookDocument *)arg1;
- (NSString *)suggestedFileExtensionForQuickLookDocument:(SFQuickLookDocument *)arg1;
- (NSString *)suggestedFileNameForQuickLookDocument:(SFQuickLookDocument *)arg1;

@end
