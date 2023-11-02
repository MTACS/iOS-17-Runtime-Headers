
@interface SXPlaceholderArticleThumbnailComponentView : SXComponentView {
    UILabel * _label;
}

@property (nonatomic, readonly) UILabel *label;

- (void).cxx_destruct;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4;
- (id)label;
- (void)layoutSubviews;
- (void)loadComponent:(id)arg1;

@end
