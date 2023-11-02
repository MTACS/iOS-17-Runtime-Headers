
@protocol PKPaperTextAttachment

@required

- (NSURL *)_encryptionDelegateCRContextURL;
- (NSURL *)_paperBundleURL;
- (NSString *)_paperIdentifier;
- (id)initWithPaperIdentifier:(NSString *)arg1;

@optional

- (void)_linkCanvasElementsDidChange;
- (NSURL *)_nonEncryptedContentCRContextURL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_paperBoundsHint;
- (void)_paperDidChangeLocally;
- (struct CGSize { double x1; double x2; })_paperSizeHint;

@end
