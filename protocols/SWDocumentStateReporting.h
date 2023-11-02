
@protocol SWDocumentStateReporting <NSObject>

@required

- (void)documentIsReady;
- (void)documentStartedLoading;
- (void)documentWillUnload;

@end
