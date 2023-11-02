
@protocol UIActivityItemSuggestionsSource <NSObject>

@optional

- (NSString *)activityViewControllerSuggestionAssetLocalIdentifier:(UIActivityViewController *)arg1;
- (NSData *)activityViewControllerSuggestionFaceRecognitionData:(UIActivityViewController *)arg1;
- (NSURL *)activityViewControllerSuggestionFileURL:(UIActivityViewController *)arg1;

@end
