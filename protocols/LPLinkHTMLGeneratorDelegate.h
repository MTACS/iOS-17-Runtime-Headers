
@protocol LPLinkHTMLGeneratorDelegate <NSObject>

@optional

- (NSURL *)linkHTMLGenerator:(LPLinkHTMLGenerator *)arg1 URLForResource:(NSData *)arg2 withMIMEType:(NSString *)arg3;
- (void)linkHTMLGenerator:(LPLinkHTMLGenerator *)arg1 didFetchMetadata:(LPLinkMetadata *)arg2;

@end
