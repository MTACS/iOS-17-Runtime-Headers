
@protocol SiriPresentationControllerDelegate <NSObject>

@required

- (void)siriPresentation:(id <SiriPresentation>)arg1 isEnabledDidChange:(bool)arg2;
- (void)siriPresentation:(void *)arg1 requestsDismissalWithOptions:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: <SiriPresentation> *, SiriDismissalOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)siriPresentation:(void *)arg1 requestsPresentationWithOptions:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: <SiriPresentation> *, SiriPresentationOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@optional

- (void)invalidateSystemApertureAssertionWithReason:(NSString *)arg1;
- (void)restrictSystemApertureToDefaultLayoutWithReason:(NSString *)arg1;
- (void)siriPresentation:(void *)arg1 requestsPunchout:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: <SiriPresentation> *, SiriPunchoutRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)siriPresentation:(id <SiriPresentation>)arg1 setHomeAffordanceSuppression:(long long)arg2;
- (void)siriPresentation:(id <SiriPresentation>)arg1 setShowsHomeAffordance:(bool)arg2;

@end
