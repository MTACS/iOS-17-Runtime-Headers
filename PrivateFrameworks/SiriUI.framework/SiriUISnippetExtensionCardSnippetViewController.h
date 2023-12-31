
@interface SiriUISnippetExtensionCardSnippetViewController : SiriUICardSnippetViewController {
    NSExtension * _extension;
    SiriUISashItem * _sashItem;
    SAUISnippet * _snippet;
}

@property (nonatomic, retain) NSExtension *extension;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_cancelTouchesIfNecessary;
- (void)_resumeTouchesIfNecessary;
- (id)extension;
- (id)initWithSnippet:(id)arg1 extension:(id)arg2;
- (id)sashItem;
- (void)setExtension:(id)arg1;
- (void)setSnippet:(id)arg1;
- (id)snippet;

@end
