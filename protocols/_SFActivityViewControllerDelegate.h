
@protocol _SFActivityViewControllerDelegate <NSObject>

@optional

- (void)activityViewController:(_SFActivityViewController *)arg1 didCompleteActivity:(NSString *)arg2 success:(bool)arg3;
- (void)activityViewController:(void *)arg1 prepareActivity:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _SFActivityViewController *, UIActivity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)activityViewControllerSupportsDownloads:(_SFActivityViewController *)arg1;
- (long long)browserPersonaForActivityViewController:(_SFActivityViewController *)arg1;

@end
