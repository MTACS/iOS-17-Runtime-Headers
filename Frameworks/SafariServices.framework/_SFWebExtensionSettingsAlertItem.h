
@interface _SFWebExtensionSettingsAlertItem : _SFSettingsAlertItem {
    WBSWebExtensionData * _extension;
}

@property (nonatomic, readonly) WBSWebExtensionData *extension;

+ (id)buttonWithTitle:(id)arg1 textStyle:(id)arg2 icon:(id)arg3 extension:(id)arg4 handler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)extension;

@end
