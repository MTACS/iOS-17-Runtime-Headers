
@protocol ICStyleSelectorDelegate <NSObject>

@required

- (bool)isEditingOnSystemPaperOnPad;
- (bool)isSelectionBlockQuote;
- (void)styleSelector:(ICStyleSelectorViewController *)arg1 didSelectStyle:(unsigned int)arg2;
- (void)styleSelector:(void *)arg1 presentViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: ICStyleSelectorViewController *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)styleSelector:(ICStyleSelectorViewController *)arg1 toggleBIUS:(unsigned long long)arg2;
- (bool)styleSelectorCanIndentLeft:(ICStyleSelectorViewController *)arg1;
- (bool)styleSelectorCanIndentRight:(ICStyleSelectorViewController *)arg1;
- (void)styleSelectorDidCancel:(ICStyleSelectorViewController *)arg1;
- (void)styleSelectorDidIndentLeft:(ICStyleSelectorViewController *)arg1;
- (void)styleSelectorDidIndentRight:(ICStyleSelectorViewController *)arg1;
- (void)toggleBlockQuote;

@end
