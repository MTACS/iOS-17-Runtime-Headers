
@protocol MUAppLockupViewModel <NSObject>

@required

- (NSString *)actionButtonText;
- (bool)isInstalled;
- (void)loadAppArtworkWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*
- (NSString *)subtitleText;
- (NSString *)titleText;

@end
