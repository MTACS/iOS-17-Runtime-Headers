
@protocol PKRemoteShareSecureElementPassViewControllerProtocol <NSObject>

@required

- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setPass:(void *)arg1 environment:(void *)arg2 isFromPeopleScreen:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: PKSecureElementPass *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setShouldPromptUserToShare:(bool)arg1;

@end
