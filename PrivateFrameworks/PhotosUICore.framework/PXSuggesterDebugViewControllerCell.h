
@interface PXSuggesterDebugViewControllerCell : UITableViewCell {
    PHSuggestion * _suggestion;
}

@property (retain) PHSuggestion *suggestion;

- (void).cxx_destruct;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)persist:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;

@end
