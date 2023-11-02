
@protocol FCPuzzleTypeSettingsDelegate <NSObject>

@required

- (void)addModifyPuzzleTypeSettingsCommandToCommandQueue:(FCModifyPuzzleTypeSettingsCommand *)arg1;
- (void)settingsDataDidChangeForPuzzleTypeID:(NSString *)arg1;

@end
