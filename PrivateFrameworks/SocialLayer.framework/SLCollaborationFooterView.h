
@interface SLCollaborationFooterView : SLRemoteView {
    <SLCollaborationFooterViewDelegate> * _delegate;
    SLCollaborationFooterViewModel * _model;
}

@property (nonatomic) <SLCollaborationFooterViewDelegate> *delegate;
@property (nonatomic, readonly) SLCollaborationFooterViewModel *model;

- (void).cxx_destruct;
- (id)delegate;
- (double)expectedHeightForWidth:(double)arg1;
- (id)initWithModel:(id)arg1 maxWidth:(double)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)makePlaceholderSlotContentForStyle:(id)arg1;
- (id)model;
- (void)renderRemoteContentForLayerContextID:(unsigned long long)arg1 style:(id)arg2 yield:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateRemoteRenderingEnabled;
- (void)updateWithNewModel:(id)arg1;

@end
