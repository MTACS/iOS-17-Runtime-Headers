
@protocol TVRUIContentPresenter <NSObject>

@required

- (void)dismissPresentedContentAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)hasPresentedContent;

@end