
@interface CAMPortraitAutoSuggestEnabledCommand : CAMCaptureCommand {
    bool  __enabled;
}

@property (getter=_isEnabled, nonatomic, readonly) bool _enabled;

- (bool)_isEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithPortraitAutoSuggestEnabled:(bool)arg1;
- (id)initWithSubcommands:(id)arg1;

@end
