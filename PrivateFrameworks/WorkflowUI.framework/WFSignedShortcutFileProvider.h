
@interface WFSignedShortcutFileProvider : WFWorkflowItemProvider {
    WFShortcutPackageFile * _shortcutFile;
    WFFileRepresentation * _signedShortcutFile;
}

@property (nonatomic, retain) WFShortcutPackageFile *shortcutFile;
@property (nonatomic, retain) WFFileRepresentation *signedShortcutFile;

- (void).cxx_destruct;
- (id)initWithWorkflow:(id)arg1 userInterface:(id)arg2;
- (id)item;
- (void)setShortcutFile:(id)arg1;
- (void)setSignedShortcutFile:(id)arg1;
- (id)shortcutFile;
- (id)signedShortcutFile;

@end
