
@protocol SFQuickLookDocumentViewDelegate <NSObject>

@required

- (long long)dataOwnerForQuickLookDocumentView:(SFQuickLookDocumentView *)arg1;

@optional

- (NSItemProvider *)itemProviderForQuickLookDocumentView:(SFQuickLookDocumentView *)arg1;
- (void)quickLookDocumentView:(SFQuickLookDocumentView *)arg1 didSelectActionAtIndex:(long long)arg2;

@end
