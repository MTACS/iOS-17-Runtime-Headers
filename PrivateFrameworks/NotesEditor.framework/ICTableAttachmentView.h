
@interface ICTableAttachmentView : ICAttachmentView {
    NSMutableArray * _outsideViews;
}

@property (nonatomic, retain) NSMutableArray *outsideViews;

- (void).cxx_destruct;
- (id)outsideViews;
- (void)setOutsideViews:(id)arg1;
- (void)setupEventHandling;
- (void)sharedInit:(bool)arg1;
- (void)updateHighlights;

@end
