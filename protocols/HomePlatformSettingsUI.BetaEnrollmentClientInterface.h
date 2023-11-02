
@protocol HomePlatformSettingsUI.BetaEnrollmentClientInterface

@required

+ (void)shouldShowBetaEnrollmentButtonForHomeID:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

- (id)initWithHomeID:(NSUUID *)arg1;

@end
