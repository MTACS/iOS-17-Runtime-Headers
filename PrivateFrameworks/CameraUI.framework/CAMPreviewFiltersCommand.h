
@interface CAMPreviewFiltersCommand : CAMCaptureCommand {
    NSArray * _filters;
}

@property (nonatomic, readonly) NSArray *filters;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)filters;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilters:(id)arg1;
- (id)initWithSubcommands:(id)arg1;

@end
