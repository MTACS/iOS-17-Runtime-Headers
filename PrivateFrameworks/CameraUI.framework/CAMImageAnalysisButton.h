
@interface CAMImageAnalysisButton : VKImageAnalysisButton {
    bool  _contextMenuDisplayed;
    <CAMImageAnalysisButtonDelegate> * _delegate;
}

@property (getter=isContextMenuDisplayed, setter=_setContextMenuDisplayed:, nonatomic) bool contextMenuDisplayed;
@property (nonatomic) <CAMImageAnalysisButtonDelegate> *delegate;

- (void).cxx_destruct;
- (void)_setContextMenuDisplayed:(bool)arg1;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)delegate;
- (bool)isContextMenuDisplayed;
- (void)setDelegate:(id)arg1;

@end
