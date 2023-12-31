
@interface WBSTemplateIconRequest : WBSSiteMetadataRequest

@property (nonatomic, readonly) WBSTemplateIconMonogramConfiguration *monogramConfiguration;
@property (nonatomic, readonly, copy) NSString *monogramTitle;
@property (nonatomic, readonly) UIColor *overrideForegroundColor;
@property (nonatomic, readonly) bool saveToDisk;

- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (id)initWithURL:(id)arg1 title:(id)arg2 monogramConfiguration:(id)arg3 overrideForegroundColor:(id)arg4 saveToDisk:(bool)arg5;
- (id)monogramConfiguration;
- (id)monogramTitle;
- (id)overrideForegroundColor;
- (bool)saveToDisk;

@end
