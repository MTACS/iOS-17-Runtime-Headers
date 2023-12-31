
@protocol FCTagSettingsDelegate <NSObject>

@required

- (void)accessTokenDidChangeForTagID:(NSString *)arg1;
- (void)accessTokenRemovedForTagID:(NSString *)arg1 userInitiated:(bool)arg2;
- (void)addModifyTagSettingsCommandToCommandQueue:(FCModifyTagSettingsCommand *)arg1;

@end
