
@protocol CNMeCardSharingAvatarProvider <NSObject>

@required

- (void)generateAvatarImageOfSize:(void *)arg1 imageHandler:(void *)arg2; // needs 2 arg types, found 8: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*

@optional

- (void)generatePosterAnimationControllerWithWindowScene:(void *)arg1 imageHandler:(void *)arg2; // needs 2 arg types, found 8: UIWindowScene *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, NSError *, void*
- (void)generatePosterImageWithWindowScene:(void *)arg1 imageHandler:(void *)arg2; // needs 2 arg types, found 8: UIWindowScene *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*

@end
