
@protocol UIPasteConfigurationSupporting <NSObject>

@required

- (UIPasteConfiguration *)pasteConfiguration;
- (void)setPasteConfiguration:(UIPasteConfiguration *)arg1;

@optional

- (bool)canPasteItemProviders:(NSArray *)arg1;
- (void)pasteItemProviders:(NSArray *)arg1;

@end
