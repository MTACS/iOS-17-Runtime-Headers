
@protocol CKTranscriptPluginView <NSObject>

@optional

- (void)configureForDisplay;
- (NSArray *)interactiveViews;
- (<CKTranscriptPluginViewDelegate> *)pluginViewDelegate;
- (void)setPluginViewDelegate:(id <CKTranscriptPluginViewDelegate>)arg1;
- (bool)wantsOutline;

@end
