
@interface SUUIFieldSettingDescriptionView : SUUISettingDescriptionView {
    bool  _enabled;
}

@property (nonatomic) bool enabled;

- (void)beginEdits;
- (void)commitEdits;
- (bool)enabled;
- (void)setEnabled:(bool)arg1;

@end
