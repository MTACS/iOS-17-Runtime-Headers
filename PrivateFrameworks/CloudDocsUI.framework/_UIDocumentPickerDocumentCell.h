
@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell {
    bool  _enabled;
}

@property (nonatomic) bool enabled;

- (void)_showPickableDiagnostic;
- (bool)enabled;
- (void)prepareForReuse;
- (void)reloadItem:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContents;
- (void)updateThumbnail;

@end
