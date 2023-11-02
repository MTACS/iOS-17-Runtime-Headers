
@protocol SXLinkActionURLQualifier <NSObject>

@required

- (bool)allowCopyingOfURL:(NSURL *)arg1;
- (bool)allowOpenInSafariForURL:(NSURL *)arg1;

@optional

- (bool)allowOpenInNewWindowForURL:(NSURL *)arg1;

@end
