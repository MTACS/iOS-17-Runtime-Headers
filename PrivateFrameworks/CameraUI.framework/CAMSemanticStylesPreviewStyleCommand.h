
@interface CAMSemanticStylesPreviewStyleCommand : CAMCaptureCommand {
    CAMSemanticStyle * __style;
}

@property (nonatomic, readonly) CAMSemanticStyle *_style;

- (void).cxx_destruct;
- (id)_style;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithStyle:(id)arg1;
- (id)initWithSubcommands:(id)arg1;

@end
