
@protocol GKLocalPlayerAuthenticationUIPersonality <NSObject>

@required

- (void)authenticationShowGreenBuddyUIForLocalPlayer:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: GKLocalPlayer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GKLocalPlayer *, NSError *, void*
- (void)authenticationShowSignInUIForLocalPlayer:(void *)arg1 dismiss:(void *)arg2; // needs 2 arg types, found 6: GKLocalPlayer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
