
@interface WFP2PSignedShortcutFileExporter : WFShortcutExporter {
    WFFileRepresentation * _signedShortcutFile;
}

@property (nonatomic, retain) WFFileRepresentation *signedShortcutFile;

- (void).cxx_destruct;
- (void)exportWorkflowWithCompletion:(id /* block */)arg1;
- (void)setSignedShortcutFile:(id)arg1;
- (id)signedShortcutFile;

@end
