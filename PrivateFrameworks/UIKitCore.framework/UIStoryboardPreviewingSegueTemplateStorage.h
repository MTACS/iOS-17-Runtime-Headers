
@interface UIStoryboardPreviewingSegueTemplateStorage : NSObject <NSCoding> {
    UIStoryboardSegueTemplate * _commitTemplate;
    UIStoryboardPreviewingSegueTemplate * _previewTemplate;
    UIView * _sender;
}

@property (nonatomic) UIStoryboardSegueTemplate *commitTemplate;
@property (nonatomic) UIStoryboardPreviewingSegueTemplate *previewTemplate;
@property (nonatomic) UIView *sender;

- (void).cxx_destruct;
- (id)commitTemplate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previewTemplate;
- (id)sender;
- (void)setCommitTemplate:(id)arg1;
- (void)setPreviewTemplate:(id)arg1;
- (void)setSender:(id)arg1;

@end
