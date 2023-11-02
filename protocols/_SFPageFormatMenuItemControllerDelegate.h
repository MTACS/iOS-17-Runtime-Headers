
@protocol _SFPageFormatMenuItemControllerDelegate <NSObject>

@required

- (void)presentModalViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIViewController *)viewControllerForPresentationForItemController:(id <_SFPageFormatMenuItemController>)arg1;

@end
